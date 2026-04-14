/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool support(TreeNode* root, long long low, long long high) {
        if (root == nullptr) {
            return true;
        }

        // check if current node violates the valid range
        if (root->val <= low || root->val >= high) {
            return false;
        }

        // recursively check left and right subtrees with updated bounds
        bool leftValid = support(root->left, low, root->val);
        bool rightValid = support(root->right, root->val, high);

        return leftValid && rightValid;
    }

    bool isValidBST(TreeNode* root) {
        return support(root, LLONG_MIN, LLONG_MAX);
    }
};

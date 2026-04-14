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
    bool k = true;

    int support(TreeNode* root) {
        if (root == NULL) return 0;

        int left = support(root->left);
        int right = support(root->right);

        // update diameter at this node
        if(abs(left-right)>1){
            k=false;
        }

        // return height of this subtree
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        support(root);
        return k;
    }
};

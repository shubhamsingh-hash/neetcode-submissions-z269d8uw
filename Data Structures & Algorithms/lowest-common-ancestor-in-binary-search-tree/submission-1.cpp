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
   TreeNode* support(TreeNode* root, TreeNode* a, TreeNode* b) {
    if (root == nullptr) return nullptr;

    if (root == a || root == b)
        return root;

    TreeNode* left = support(root->left, a, b);
    TreeNode* right = support(root->right, a, b);

    if (left && right)
        return root;

    return left ? left : right;
}


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    
       return support(root,p,q);
        
    }
};

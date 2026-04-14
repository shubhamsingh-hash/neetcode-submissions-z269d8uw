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
    void support(TreeNode* root){
        if(root==nullptr){
            return;
        }
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        support(root->left);
        support(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        support(root);
        return root;
        
    }
};

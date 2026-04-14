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
    int dia=0;
    int support(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int temp1=support(root->left);
        int temp2=support(root->right);
        dia=max(dia,temp1+temp2);
        return 1+max(temp1,temp2);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        support(root);
        return dia;
        
    }
};




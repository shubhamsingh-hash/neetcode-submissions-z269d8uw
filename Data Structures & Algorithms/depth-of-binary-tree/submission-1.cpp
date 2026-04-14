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
    int support(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int temp=support(root->left);
        int temp2=support(root->right);
        return 1+max(temp,temp2);
    }
    int maxDepth(TreeNode* root) {
        int ans=support(root);
        return ans;
        
    }
};

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
    TreeNode* support(TreeNode* root,int p,int q){
        if(root==nullptr){
            return root;
        }
        int k=root->val;
        if((k>p&&k<q)||(k<p&&k>q)||(k==p)||(k==q)){
            return root;
        }
        else if(k>p&&k>q){
            TreeNode* lop;
            lop=support(root->left,p,q);
            return lop;
        }
        else{
            TreeNode* pol;

            pol=support(root->right,p,q);
            return pol;
        }
        


    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int c=p->val;
        int r=q->val;
        return support(root,c,r);
        
        
    }
};

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
    void support(TreeNode* root,vector<int>& arr){
        if(root==nullptr){
            arr.push_back(0);
            return;
        }
        arr.push_back(root->val);
        support(root->left,arr);
        support(root->right,arr);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> a;
        vector<int> b;
        support(p,a);
        support(q,b);
        return a==b;
        
    }
};

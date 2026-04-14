class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        return (p->val == q->val) &&
               isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }

    bool support(TreeNode* root, TreeNode* root2) {
        if (root == nullptr && root2 == nullptr) return true;  // ✅ handle both null
        if (root == nullptr) return false;
        if (isSameTree(root, root2)) return true;
        return support(root->left, root2) || support(root->right, root2);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return support(root, subRoot);
    }
};

class Solution {
    bool solve(TreeNode* l, TreeNode* r){
        if(!l ^ !r) return 0;
        if(!l && !r) return 1;
        if(l->val != r->val) return 0;
        return solve(l->left, r->right) && solve(l->right, r->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return solve(root->left, root->right);
    }
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return root==nullptr ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
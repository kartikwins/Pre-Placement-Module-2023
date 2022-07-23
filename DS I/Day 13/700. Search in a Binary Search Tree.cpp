class Solution {
public:
    TreeNode* temp = NULL;
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){
            return NULL;
        }
        if(root->val == val){
            temp = root;
        }
        if(val < root->val){
            searchBST(root->left, val);
        }
        else{
            searchBST(root->right, val);
        }
        return temp;;
    }
};
class Solution {
public:
    bool help(TreeNode* root,long int min,long int max){
        if(root==NULL)
            return true;
        if(root->val>=max or root->val<=min)
            return false;
        return help(root->left,min,root->val) and help(root->right,root->val,max); 
    }
    bool isValidBST(TreeNode* root) {
        return help(root,LONG_MIN,LONG_MAX);
    }
};
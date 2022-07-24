class Solution {
public:
    vector<int> ans ;
    void inorder(TreeNode *root){
        if(root == NULL){
            return ;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        
        int i = 0 , j = ans.size() - 1;
        while(i < j){
            if(ans[i] + ans[j] == k){
                return true;
            }else if(ans[i] + ans[j] < k ){
                i++;
            }else {
                j--;
            }
        }
        
        return false;
    }
};
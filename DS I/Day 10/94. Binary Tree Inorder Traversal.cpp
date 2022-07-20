class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int>ans;
        inorder(root,ans);
        return ans;
    }
    
    void inorder(TreeNode* root,vector<int>& ans)
    {
          if(root==NULL){return;
        }
        
         
         inorder(root-> left,ans);
         ans.push_back(root->val);
         inorder(root->right,ans);
             
         //return ans;
    }
};
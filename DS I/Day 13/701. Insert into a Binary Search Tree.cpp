class Solution {
public:
    void search(TreeNode* root, int val)
    {
        if(val>root->val)
        {
            if(!root->right)
            {
                TreeNode* temp = new TreeNode();
                root->right = temp;
                temp->val = val;
                return;
            }
            else
                search(root->right, val);
        }
        else
        {
            if(!root->left)
            {
                TreeNode* temp = new TreeNode();
                root->left = temp;
                temp->val = val;
                return;
            }
            else
                search(root->left, val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            TreeNode* temp = new TreeNode();
            temp->val = val;
            return temp;
        }
        search(root, val);
        return root;
    }
};
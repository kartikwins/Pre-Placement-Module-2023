class Solution {
public:

void preorder(TreeNode* root,vector<int> &vec)
{
	if(root==NULL)
		return ;
	vec.push_back(root->val);
	preorder(root-> left,vec);
	preorder(root-> right,vec);
}
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> vec;
		preorder(root,vec);
		return vec;
	}
};
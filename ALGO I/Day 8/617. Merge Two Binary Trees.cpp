class Solution {
public:
	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
		return mergeTwoTrees(root1,root2);
	}

	TreeNode* mergeTwoTrees(TreeNode* root1, TreeNode* root2)
	{
		if(root1 == NULL && root2 == NULL)
			return NULL;

		if(root1 == NULL)
			return root2;

		if(root2 == NULL)
			return root1;

		TreeNode* newNode = new TreeNode(root1->val + root2->val);
		newNode->left = mergeTwoTrees(root1->left, root2->left);
		newNode->right = mergeTwoTrees(root1->right, root2->right);

		return newNode;
	}
};
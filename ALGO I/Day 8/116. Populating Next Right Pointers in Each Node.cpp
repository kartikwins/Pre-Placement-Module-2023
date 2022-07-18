class Solution {
public:
    void preorder(Node* &root, int index, vector<Node*>& table)
    {
        if(!root) return;
        if(table[index]==NULL)
            table[index] = root;
        else if(table[index]!=NULL)
        {
            table[index]->next = root;
            table[index] = root;
        }
        preorder(root->left, index+1,table);
        preorder(root->right, index+1,table);
    }
    Node* connect(Node* root) {
        Node* temp = root;
        int c = 0;
        while(temp!=NULL)
        {
            temp=temp->left;
            c++;
        }
        vector<Node*> table (c, NULL);
        preorder(root,0,table);
        return root;
    }
};
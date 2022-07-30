class Solution {
public:
    Node* connect(Node* root) {
        if(!root)   return root;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size){
                Node *node=q.front();
                q.pop();
                node->next=(size--==1)?NULL:q.front();
                if(node->left)  q.push(node->left);
                if(node->right)  q.push(node->right);
            } 
        }
        return root;
    }
};
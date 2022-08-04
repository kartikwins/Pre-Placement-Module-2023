class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return head;
        }
        else{
            ListNode* temp = head;
            vector<int>v;
            while(temp){
                v.push_back(temp->val);
                temp = temp->next;
            }
            
            if(v.size()==1){
                return head;
            }
            else{
                for(int i=0;i<v.size();i++){
                    if(i%2==0 and i!=v.size()-1){
                        int a = v[i];
                        v[i]  = v[i+1];
                        v[i+1] = a;
                    }
                }
                temp = head;
                for(auto i:v){
                    temp->val = i;
                    temp = temp->next;
                }
                return head;
            }
        }
    }
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        int i=0;
        
        while(head!=NULL){
            head=head->next;
            i++;

        }
        int mid=i/2;
        for(int j=0;j<mid;j++){
            ptr=ptr->next;
        }
        return ptr;
        
    }
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        
        ListNode* past=NULL, *present=head;
        while(present){
            
            ListNode* future=present->next;
            present->next=past;
            past=present;
            present=future;
        }
        return past;
    }
};
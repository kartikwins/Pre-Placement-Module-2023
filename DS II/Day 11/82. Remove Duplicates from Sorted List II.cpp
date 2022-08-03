class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyNode = new ListNode(-101,head);
        ListNode* p = dummyNode;
        while(head!=NULL){
            if(head->next!=NULL && head->val==head->next->val){
                while(head->next!=NULL && head->val==head->next->val){
                    head=head->next;
                }
                p->next = head->next;
            }
            else{
                p=p->next;    
            }
            head = head->next;            
        }
        return dummyNode->next;
    }
};
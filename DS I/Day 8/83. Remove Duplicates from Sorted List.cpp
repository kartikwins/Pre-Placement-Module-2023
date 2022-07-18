class Solution {

public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head; 
        while(current) {
        	while(current->next && current->val == current->next->val) {
        		current->next = current->next->next;
        	}
        	current = current->next;
        }
        return head;
    
    }
};
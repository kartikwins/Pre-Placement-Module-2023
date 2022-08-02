class Solution {
public:
    ListNode* floydDetection(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            
            if(fast == slow){
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = floydDetection(head);
        
        if(temp == NULL){
            return NULL;
        }
        ListNode* slow = head;
        while(temp != slow){
            temp = temp -> next;
            slow = slow -> next;
        }
        return temp;
        
        // Time complexity ->> O(n)
        // Space Complexity ->> O(1)
    }
};
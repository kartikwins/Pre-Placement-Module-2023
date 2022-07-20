class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        //get head node
        ListNode* head = 0;
        if(list1->val < list2->val){
            head = list1;
            list1= list1->next;
        } else {
            head = list2;
            list2= list2->next;
        }
        ListNode* cur = head; //avoid modify head, move `cur` in following movement
        
        while(list1 || list2){
            if(!list1){
                cur->next = list2;
                list2 = list2->next;
                cur = cur->next;
                continue;
            }
            if(!list2){
                cur->next = list1;
                list1 = list1->next;
                cur = cur->next;
                continue;
            }
            
            if(list1->val < list2->val){
                cur->next = list1;
                list1 = list1->next;
                cur = cur->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
                cur = cur->next;
            }
        }
        return head;
    }
};
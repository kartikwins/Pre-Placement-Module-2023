class Solution {
public:
     ListNode* removeNthFromEnd(ListNode* head, int n) 
     {
           ListNode *curr=head; 
		   int len=0;
       
       // finding the length of linked list
       while(curr!=NULL)
       {
         len++;
         curr=curr->next;
       }
      
    // if head itself is to be deleted, just return head -> next
      if(len == n)
      {
         ListNode *temp = head;
          head=head->next;
          delete temp;
          return head ;
      }

      
      curr=head;
    // iterate first len-n nodes
      for(int i=1; i< (len-n); i++)
      {
       curr=curr->next; 
      }
      
      // remove the nth node from the end
      ListNode *temp= curr->next;
      curr->next = curr->next->next;
      delete(temp);
      
      return head;
      
    }
};
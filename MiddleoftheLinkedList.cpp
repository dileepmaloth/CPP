
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head; 
        int len=1;
        while(temp->next!=NULL){
            temp=temp->next;
            ++len;
        }
        temp = head;
        if(len==1) return 0;
        if(len==2 && n==2) return temp->next;
        if(n==len) head = temp->next;
        
        ListNode* forward=head->next->next;
        while( (--len)>n ){
            temp=temp->next;
            forward=forward->next;
        }
        
        temp->next=forward;
        temp=head;
        return head;
        
    }
};
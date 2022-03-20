 ListNode* swapPairs(ListNode* head) {
    if(  head==NULL || head->next==NULL )  return head;
        
       ListNode  *curr=head;
       ListNode *nextNode=head->next;
        curr->next=swapPairs(head->next->next);
        nextNode->next=curr;
        return nextNode;
    }

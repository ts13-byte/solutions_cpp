class Solution {
public:
ListNode *sorted=NULL;
    void insert(ListNode *nextNode){
        if(sorted==NULL || sorted->val>=nextNode->val){
            nextNode->next=sorted;
            sorted=nextNode;
        
        }
        else{
            ListNode *current=sorted;
            while(current->next!=NULL && current->next->val<nextNode->val){
                current=current->next;
            }
            nextNode->next=current->next;
            current->next=nextNode;
            
            
            
        }
    }
    ListNode* insertionSortList(ListNode* head) {
     //ListNode *sorted=NULL;
     ListNode *curr=head;
     while(curr){
         ListNode *next=curr->next;
         insert(curr);
         curr=next;   
     }
        return sorted;
     
    }
};

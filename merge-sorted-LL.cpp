    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1==NULL && list2!=NULL){
            return list2;
        }
        else if (list2==NULL && list1!=NULL){
            return list1;
        }
        else if (list1==NULL && list2==NULL){
            return NULL;
        }
        ListNode *head = NULL;//head
        ListNode *tail = NULL;//tail
        if (list1->val>list2->val){//initial
            head = list2;
            tail = list2;//tail at smaller node
            list2 = list2->next;//move to next pos
        }
        else{
            head = list1;
             tail= list1;
            list1 = list1->next;
        }
        while(list1!=NULL && list2!=NULL){
             if (list1->val<list2->val){
                 tail->next = list1;//tail's next at smaller node
                 tail= list1;//move tail to smaller node 
                 list1 = list1->next;//move to next pos.
             }
            else{
                tail->next= list2;
                tail= list2;
                list2 = list2->next;
            }
        }
        if (list1!=NULL) tail->next = list1;//if one list is empty place remaining nodes of that second list at the end of the tail.
        
        else tail->next = list2;
        
        return head;//return the head.
    }

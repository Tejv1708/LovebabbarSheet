//Using Recursion 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       // if list1 happen to be NULL
		// we will simply return list2.
		if(list1 == NULL)
        {
			return list2;
		}
		
		// if list2 happen to be NULL
		// we will simply return list1.
		if(list2 == NULL)
        {
			return list1;
		} 
		
		// if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
		// we wall call recursively l1 -> next and whole l2 list.
		if(list1 -> val <= list2 -> val)
        {
			list1 -> next = mergeTwoLists(list1 -> next, list2);
			return list1;
		}
		// we will call recursive l1 whole list and l2 -> next
		else
        {
			list2 -> next = mergeTwoLists(list1, list2 -> next);
			return list2;            
		}

	
	// Using iteration 
	
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       // if list1 happen to be NULL
		// we will simply return list2.
        if(list1 == NULL)
            return list2;
		
		// if list2 happen to be NULL
		// we will simply return list1.
        if(list2 == NULL)
            return list1;
        
        ListNode * ptr = list1;
        if(list1 -> val > list2 -> val)
        {
            ptr = list2;
            list2 = list2 -> next;
        }
        else
        {
            list1 = list1 -> next;
        }
        ListNode *curr = ptr;
        
		// till one of the list doesn't reaches NULL
        while(list1 &&  list2)
        {
            if(list1 -> val < list2 -> val){
                curr->next = list1;
                list1 = list1 -> next;
            }
            else{
                curr->next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
                
        }
		
		// adding remaining elements of bigger list.
        if(!list1)
            curr -> next = list2;
        else
            curr -> next = list1;
            
        return ptr;
       
    }
     
};

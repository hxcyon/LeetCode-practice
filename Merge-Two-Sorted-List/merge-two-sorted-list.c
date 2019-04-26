/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l3;
    struct ListNode *head;
    
    if(l1 == NULL && l2 != NULL)
        return l2;
    if(l2 == NULL && l1 != NULL)
        return l1;
    if(l1 == NULL && l2 == NULL)
        return NULL;
    
    if(l1->val <= l2->val){
        head = l1;
        l1 = l1->next;
    }
    else{
        head = l2;
        l2 = l2->next;
    }    
    l3 = head;
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val <= l2->val){
            head->next = l1;
            l1 = l1->next;
        }
        else{
            head->next = l2;
            l2 = l2->next;
        }
        
        head->next->next = NULL;
        head = head->next;
        
    }
    if(l1 != NULL){
        head->next = l1;
    }
    else if(l2 != NULL){
        head->next = l2;
    }
    return l3;
}



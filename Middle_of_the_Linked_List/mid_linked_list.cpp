/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* list = head;
        ListNode* temp = head;
        /*
        if(!head)
            return nullptr;
        */
        while(temp != NULL && temp->next != NULL){
            list = list->next;
            temp = temp->next->next;
        }
        return list;
    }
};

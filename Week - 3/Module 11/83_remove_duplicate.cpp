class Solution {
public:
    ListNode* deleteDuplicate(ListNode* head) {
        if(head == NULL) return;
        
        ListNode* tmp = head;
        while(tmp->next != NULL) 
        {
            if(tmp->val == tmp->next->val) 
            {
                ListNode* deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }
            if(tmp->next == NULL) break;

            else if(tmp->val != tmp->next->val) 
            {
                tmp = tmp->next;
            }
        }
        return head;
    }

};
class Solution {
public:
    void reverse(ListNode* &head, ListNode* current) {
        
        while(current->next == NULL) {
            head = current;
            return;
        }
        reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }
    ListNode* reverselist(ListNode* head) {
        if(head == NULL) return head;
        reverse(head, head);
        return head;
    }
};
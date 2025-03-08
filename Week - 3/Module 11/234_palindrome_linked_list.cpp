class Solution {
public: 
    void insert_tail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* newNode = new ListNode(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void reverse(ListNode* &head, ListNode* current) {
        
        while(current->next == NULL) {
            head = current;
            return;
        }
        reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
    //error handle 
        if(head == NULL) return head;

    //similar linked list input
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;
        ListNode* tmp = head;
        while(tmp != NULL) {
            insert_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }
    //reverse second list
        reverse(newhead, newhead);

    //similarity check
        ListNode* temp1 = head;
        ListNode* temp2 = newhead;
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->val != temp2->val) {
                return false;
            }
            else {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            
        }
        return true;

    }
};
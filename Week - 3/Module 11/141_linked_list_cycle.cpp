class Solution {
    public: 
        bool hascycle(ListNode* head) {
            ListNode* fast = head;
            ListNode* slow = head;
            while(fast != NULL && fast->next!= NULL) {
                slow = slow->next;
                fast = fast->next->next;

                if(slow == fast) {
                    return true;
                }
            }
            return false;
        }
};
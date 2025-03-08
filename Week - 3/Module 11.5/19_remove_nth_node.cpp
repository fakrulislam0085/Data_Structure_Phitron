class Solution {
public:
    int size(ListNode* tmp)
    {
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        ListNode* tmp = head;

        int x = size(head) - n;
        if(x == 0) return NULL;
        else 
        {
            for(int i=1; i<=x; i++)
            {
                tmp = tmp->next;
            }
            tmp = tmp->next->next;
            return head;
        }
    }
};
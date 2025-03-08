class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    int getDecimalValue (ListNode* head)
    {
        int sz = size(head);
        int x = pow(2, sz-1);
        ListNode* tmp = head;
        int ans = 0;
        while(tmp != nullptr)
        {
            if(tmp->val == 1)
            {
                ans = ans + x;
            }
            tmp = tmp->next;
            x/=2;
        }
        return ans;
    }
};
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2)
    {
        ListNode* tmp = list1;
        for(int i=1; i<a; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " ";

        ListNode* tmp2 = tmp->next;
        for(int i=a; i<=b; i++)
        {
            tmp2 = tmp2->next;
        }
        cout << tmp2->val << endl;

        tmp->next = list2;
    }
}
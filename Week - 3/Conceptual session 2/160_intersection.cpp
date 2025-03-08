class Solution {
public:
    ListNode* getintersectionNode (ListNode* headA, ListNode* headB)
    {
        ListNode* i = headA;
        ListNode* j = headB;

        for(ListNode* i = headA; i!=NULL; i=i->next)
        {
            for(ListNode* j = headB; j!=NULL; j=j->next)
            {
                if(i==j)
                    return i;
                
            }
        }
        return NULL;
    }
};
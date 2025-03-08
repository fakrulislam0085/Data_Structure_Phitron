class Solution
{
public:
    ListNode* insertGreatestcommondivisors(ListNode* head) 
    {
        ListNode* tmp = head;

        while(tmp->next != nullptr)
        {
            int Gcd = __gcd(tmp->val, tmp->next->val);
            ListNode* newNode = new ListNode(Gcd);

            newNode->next = tmp->next;
            tmp->next = newNode;

            tmp = tmp->next->next;  //tmp = 18->6 //new tmp = 10->3
        }

        return head;
    }
};
class Solution {
public:
    void DeleteNode(ListNode* Node) {
        Node->val = Node->next->val;
        ListNode* deleteNode = Node->next;
        Node->next = Node->next->next;
        delete deleteNode;
    }
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) head = head->next;
        ListNode* tmp = head;
        while (tmp)
            if (tmp->next && tmp->next->val == val)
                tmp->next = tmp->next->next;
            else
                tmp = tmp->next;
        return head;
    }
};

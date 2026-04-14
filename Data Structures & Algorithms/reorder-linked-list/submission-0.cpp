class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // 1️⃣ Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2️⃣ Reverse second half
        ListNode* curr = slow->next;
        ListNode* prev = nullptr;
        slow->next = nullptr;  

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        
        ListNode* first = head;
        ListNode* second = prev;

        while (second) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};

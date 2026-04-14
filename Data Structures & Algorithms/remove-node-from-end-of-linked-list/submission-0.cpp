/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int a=1;
        while(a<=n){
            temp=temp->next;
            a++;
        }
        ListNode* temp1=head;
        if (temp == nullptr) {
    ListNode* toDelete = head;
    head = head->next;
    delete toDelete;
    return head;
}
        while(temp->next!=nullptr){
            temp=temp->next;
            temp1=temp1->next;

        }
        ListNode* deko=temp1->next;
        temp1->next=temp1->next->next;
        delete deko;
        return head;
        
    }
};

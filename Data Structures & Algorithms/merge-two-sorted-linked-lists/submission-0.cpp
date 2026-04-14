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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* nak=new ListNode(0);
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode* tail=nak;
        while(l1!=nullptr&&l2!=nullptr){
            if(l1->val<=l2->val){
                int crp=l1->val;
                ListNode* rad=new ListNode(crp);
                tail->next=rad;
                tail=tail->next;
                l1=l1->next;

            }
            else{
                 int crp=l2->val;
                ListNode* rad=new ListNode(crp);
                tail->next=rad;
                tail=tail->next;
                l2=l2->next;

            }

        }
        while(l1!=nullptr){
             int crp=l1->val;
                ListNode* rad=new ListNode(crp);
                tail->next=rad;
                tail=tail->next;
                l1=l1->next;


        }
        while(l2!=nullptr){
             int crp=l2->val;
                ListNode* rad=new ListNode(crp);
                tail->next=rad;
                tail=tail->next;
                l2=l2->next;

        }
        return nak->next;


        
    }
};

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
        ListNode* dummy = new ListNode(0);
        ListNode* nw = dummy;
        ListNode* l1=list1;
        ListNode* l2=list2;
        while(l1!=nullptr&&l2!=nullptr){
            if(l1->val>=l2->val){
                ListNode* temp=new ListNode(l2->val);
                nw->next=temp;
                nw=nw->next;
                l2=l2->next;
            }
            else{
                 ListNode* temp=new ListNode(l1->val);
                nw->next=temp;
                nw=nw->next;
                l1=l1->next;

            }
        }
        if(l1!=nullptr){

            while(l1!=nullptr){
                ListNode* temp=new ListNode(l1->val);
                nw->next=temp;
                nw=nw->next;
                l1=l1->next;
            }
        }
     
       if(l2!=nullptr){
        while(l2!=nullptr){
            ListNode* temp=new ListNode(l2->val);
            nw->next=temp;
            nw=nw->next;
            l2=l2->next;
        }
       }
    return dummy->next;

        
    }
};

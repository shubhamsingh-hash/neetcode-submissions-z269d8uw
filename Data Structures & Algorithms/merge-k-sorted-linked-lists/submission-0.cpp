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
    ListNode* merge(ListNode* list1,ListNode* list2){

        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        ListNode* l1=list1;
        ListNode* l2=list2;
        if (l1 == nullptr) return l2;
if (l2 == nullptr) return l1;
        while(l1!=nullptr&&l2!=nullptr){
            int a=l1->val;
            int b=l2->val;
            if(a>=b){
                ListNode* temp=new ListNode(b);
                curr->next=temp;
                curr=curr->next;
                l2=l2->next;
            }
            else{
                ListNode* temp=new ListNode(a);
                curr->next=temp;
                curr=curr->next;
                l1=l1->next;
            }
        }
        while(l1!=nullptr){
            ListNode* temp=new ListNode(l1->val);
                curr->next=temp;
                curr=curr->next;
                l1=l1->next;

        }
        while(l2!=nullptr){
            ListNode* temp=new ListNode(l2->val);
            curr->next=temp;
            curr=curr->next;
            l2=l2->next;
        }

        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        int n=lists.size();
        for(int i=1;i<n;i++){
            ListNode* temp1=lists[i-1];
             ListNode* temp2=lists[i];
            ListNode* temp3=merge(temp1,temp2);
            lists[i]=temp3;
        }
        return lists[lists.size()-1];

        
    }
};

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int value=carry;
            if(l1) value+=l1->val;
            if(l2) value+=l2->val;
            ListNode* t=new ListNode(value%10);
            if(value>9) carry=1;
            else carry=0;
            temp->next=t;
            temp=t;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }

        if(carry){
            ListNode* t=new ListNode(1);
            temp->next=t;
            temp=t;
        }
        return dummy->next;
    }
};

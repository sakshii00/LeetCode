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
    ListNode* findmiddle(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head->next; //gives middle 1 if even length and works for odd too
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* MergeLL(ListNode* t1, ListNode* t2){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        while(t1!=NULL){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
        
        while(t2!=NULL){
                temp->next=t2;
                temp=t2;
                t2=t2->next;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        //merge sort algo
        ListNode* middle= findmiddle(head);
        ListNode* left=head;
        ListNode* right=middle->next;
        middle->next=nullptr;
        left= sortList(left); //left part
        right= sortList(right); //right part
        return MergeLL(left,right);
    }
};

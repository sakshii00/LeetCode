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
    ListNode* reverseList(ListNode* head){
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* temp=curr;
        while(temp!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        return prev;

    }

    void reorderList(ListNode* head) {
        if(head==NULL) return;
        if(head->next==NULL) return;

        //get to the middle node
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        //reverse from the middle node
        ListNode* revNode=reverseList(slow->next);

        slow->next=NULL;

        //change linking
        //1-2
        //5-4-3 in one (reversed)
        //1-5-2-4-3
        ListNode* origNode=head;
        while(revNode!=NULL ){
            ListNode* temp1=origNode->next;
            ListNode* temp2=revNode->next;
            origNode->next=revNode;
            revNode->next=temp1;
            origNode=temp1;
            revNode=temp2;
        }
       
        return;


    }
};

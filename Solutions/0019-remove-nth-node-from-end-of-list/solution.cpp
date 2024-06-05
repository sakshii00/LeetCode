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
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* prev=head;
        ListNode* temp=head;
        while(n>0){
            temp=temp->next;
            n--;
        }
        if(temp==NULL){
            //means node to del is head
            head=head->next;
            return head;
        }
        while(temp->next!=NULL){
            temp=temp->next;
            prev=prev->next;
        }
        
        prev->next=prev->next->next;
        
        return head;
    }
};

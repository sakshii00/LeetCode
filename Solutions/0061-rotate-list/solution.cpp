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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode* temp=head;
        int l=1;
        while(temp->next!=NULL){
            l++;
            temp=temp->next;
        }
        
        if(k%l==0) return head;
        
        else{
            k=k%l;
            k=l-k;
        }
        temp->next=head;
        ListNode* temp2=head;
        while(k>1){
            k--;
            temp2=temp2->next;
        }
        head=temp2->next;
        temp2->next=NULL;
        return head;
        
    }
};

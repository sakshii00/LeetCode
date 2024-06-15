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
    ListNode* findkth ( ListNode* temp, int k ){
        while(k>1){
            if(temp) temp=temp->next;
            else return NULL;
            k--;
        }
        return temp;
    }

    ListNode* reverse( ListNode* head ){
        if(head==NULL || head->next== NULL) return head;
        ListNode* curr=head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while( temp != NULL ){
            temp = curr->next;
            curr->next= prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* kthnode = NULL;
        ListNode* nextnode=NULL;
        ListNode* prevnode=NULL;
        while ( temp != NULL ){
            kthnode = findkth ( temp, k );
            if(kthnode){
                nextnode=kthnode->next;
                kthnode->next=NULL;
                ListNode* newhead=reverse(temp);
                if(temp==head){
                   head=newhead;
                }
                else{
                    if(prevnode) prevnode->next=newhead;
                    
                }
                prevnode=temp;
                temp=nextnode;
            }
            else{
               if(prevnode) prevnode->next=temp;
               break;
            }
        }
        return head;

    }
};

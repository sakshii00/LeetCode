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
        if(head->next==NULL && n==1){
            return NULL;
        } 
        int cnt=n;
        ListNode* fast=head;
        while(fast!=NULL && cnt>0){
            fast=fast->next;
            cnt--;
        }

        if(fast==NULL){
 
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            return head;
        }

        ListNode* slow=head;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        slow->next=slow->next->next;
        return head;

        //dry run
        //1 2 3 4 5
        //remove 2
        //cnt =2
        //fast=3,4,5
        //slow=1,2,3
        
        //1, 2
        //1st 
        //n=1
        //fast: 1,2
        //slow: 1

        //1, 2
        //1nd node
        //cnt=1
        //fast would go till 2
        //

    }
};

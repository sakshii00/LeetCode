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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp= head;
        ListNode *temp2=head;
        int itr=0;
        while(temp->next!=NULL){
            temp=temp->next;
            itr++;
            if(itr%2!=0){
                temp2=temp2->next;
            }
        }
        return temp2;
    }
};

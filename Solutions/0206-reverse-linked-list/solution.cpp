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
    ListNode* recursion(ListNode* previous, ListNode* curr){
        if(curr==NULL) return previous;
        ListNode* temp=curr->next;
        curr->next=previous;
        return recursion(curr, temp);

    }
    ListNode* reverseList(ListNode* head) {
        ListNode* previous=NULL;
        ListNode* curr=head;
        
        return recursion(previous, curr);
    }
};

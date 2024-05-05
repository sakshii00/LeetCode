/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        //we go till 2nd last node
        while(temp->next->next!=NULL){
            temp->val=temp->next->val;
            temp=temp->next;
        }

        temp->val=temp->next->val;
        temp->next=NULL;
        
    }
};

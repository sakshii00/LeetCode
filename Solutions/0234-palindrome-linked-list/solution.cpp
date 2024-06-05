class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverse(slow->next); // Reverse the second half
        
        ListNode* p1 = head;
        ListNode* p2 = slow->next;
        while (p2) {
            if (p1->val != p2->val) {
                slow->next = reverse(slow->next); // Reverse back the second half
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        
        slow->next = reverse(slow->next); // Reverse back the second half
        return true;
    }
};


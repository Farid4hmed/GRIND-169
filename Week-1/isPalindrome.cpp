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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = slow;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverse(slow);
        prev->next = NULL;

        ListNode* curr = head;

        while(curr!=NULL && newHead!=NULL){
            if(curr->val != newHead->val)return false;
            curr=curr->next;
            newHead=newHead->next;
        }

        return true;
    }

    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }
};

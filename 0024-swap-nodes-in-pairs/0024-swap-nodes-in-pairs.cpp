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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;
         
         ListNode* dummy = new ListNode(0);
         dummy->next = head;

         ListNode* prev = dummy;

         while(prev->next != nullptr && prev->next->next != nullptr ){
            ListNode* first = prev->next;
            ListNode* second = first->next;
            ListNode* nextPair = second->next;

            prev->next = second;
            second->next = first;
            first->next = nextPair;

            prev = first;
         }

        return dummy->next;
    }
};
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
    int getDecimalValue(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* nextN = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextN;
        }

        int ans = 0;
        int i = 0;
        while(prev){
            ans += prev->val * (1<<i);
            i++;
            prev = prev->next;
        }
        return ans;

    }
};
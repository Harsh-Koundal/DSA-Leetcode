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
        if (head == nullptr || head->next == nullptr || k == 0)
         return head;

        ListNode* curr = head;
        ListNode* newTail = head;

        int n = 1;
        ListNode* lastN = head;

        while(lastN->next){
            lastN = lastN->next;
            n++;
        }

        k %= n;

        if(k==0){
            return head;
        }else{
            lastN->next = head;
        }

        int steps = n - k - 1;

        while(steps--){
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
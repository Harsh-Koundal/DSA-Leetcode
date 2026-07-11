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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() < 1) return nullptr;

        vector<int> mp;

        for(auto list : lists){
            while(list){
                mp.push_back(list->val);
                list = list->next;
            }
        }

        if (mp.empty()) return nullptr;
        sort(mp.begin(),mp.end());

        ListNode* head = new ListNode(mp[0]);
        ListNode* tail = head;

        for(int i=1;i<mp.size();i++){
            ListNode* current = new ListNode(mp[i]);
            tail->next = current;
            tail = current;
        }
        return head;
    }
};
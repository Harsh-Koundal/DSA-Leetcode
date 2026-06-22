class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        // Iterate over set instead of nums
        for (int num : st) {

            // Start of sequence
            if (st.find(num - 1) == st.end()) {

                int currentNum = num;
                int count = 1;

                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
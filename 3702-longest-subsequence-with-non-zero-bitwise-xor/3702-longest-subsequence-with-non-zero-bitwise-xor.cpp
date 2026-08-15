class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool hashNonZero = false;
        int n = nums.size();
        int totalXor = 0;

        for(int x : nums){
            totalXor ^= x;

            if(x != 0){
                hashNonZero = true;
            }
        }

        if(totalXor != 0)
         return n;

        if(hashNonZero)
         return n-1;

     return 0;
    }
};
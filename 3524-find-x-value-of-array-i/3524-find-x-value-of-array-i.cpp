class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> result(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {

            vector<long long> newDp(k, 0);

            // Extend previous subarrays
            for (int r = 0; r < k; r++) {

                if (dp[r] > 0) {

                    int newRemainder = (1LL * r * num) % k;

                    newDp[newRemainder] += dp[r];
                }
            }

            // Start a new subarray
            newDp[num % k]++;

            // Move to next position
            dp = newDp;

            // Add current subarrays to answer
            for (int r = 0; r < k; r++) {
                result[r] += dp[r];
            }
        }

        return result;
    }
};
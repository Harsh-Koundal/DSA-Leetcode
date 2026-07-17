class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        // Frequency of each value
        vector<long long> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        // divCnt[g] = numbers divisible by g
        vector<long long> divCnt(mx + 1, 0);

        for (int g = 1; g <= mx; g++) {
            for (int multiple = g; multiple <= mx; multiple += g) {
                divCnt[g] += freq[multiple];
            }
        }

        // exactPairs[g] = pairs having gcd exactly g
        vector<long long> exactPairs(mx + 1, 0);

        for (int g = mx; g >= 1; g--) {
            long long cnt = divCnt[g];
            exactPairs[g] = cnt * (cnt - 1) / 2;

            for (int multiple = 2 * g; multiple <= mx; multiple += g) {
                exactPairs[g] -= exactPairs[multiple];
            }
        }

        // Prefix counts of sorted gcdPairs
        vector<long long> prefix(mx + 1, 0);
        for (int g = 1; g <= mx; g++) {
            prefix[g] = prefix[g - 1] + exactPairs[g];
        }

        vector<int> ans;

        for (long long q : queries) {
            // q is 0-indexed
            int g = lower_bound(prefix.begin(), prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};
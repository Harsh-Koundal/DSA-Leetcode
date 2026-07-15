class Solution {
public:
    int MOD = 1000000007;
    int memo[205][201][201];

    int solve(int idx, int g1, int g2, vector<int>& nums) {
        if (idx == nums.size()) {
            return (g1 == g2 && g1 != 0);
        }

        if (memo[idx][g1][g2] != -1)
            return memo[idx][g1][g2];

        long long ans = 0;

        // Ignore current element
        ans += solve(idx + 1, g1, g2, nums);

        // Put in seq1
        ans += solve(idx + 1, std::gcd(g1, nums[idx]), g2, nums);

        // Put in seq2
        ans += solve(idx + 1, g1, std::gcd(g2, nums[idx]), nums);

        return memo[idx][g1][g2] = ans % MOD;
    }

    int subsequencePairCount(vector<int>& nums) {
        memset(memo, -1, sizeof(memo));
        return solve(0, 0, 0, nums);
    }
};
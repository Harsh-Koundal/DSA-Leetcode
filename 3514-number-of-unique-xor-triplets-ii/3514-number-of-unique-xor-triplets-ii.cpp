class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;

        vector<vector<bool>> dp(4, vector<bool>(MAXX, false));
        dp[0][0] = true;

        for (int v : nums) {
            auto ndp = dp;

            for (int c = 0; c <= 3; c++) {
                for (int x = 0; x < MAXX; x++) {
                    if (!dp[c][x]) continue;

                    // take current index once
                    if (c + 1 <= 3)
                        ndp[c + 1][x ^ v] = true;

                    // take current index twice
                    if (c + 2 <= 3)
                        ndp[c + 2][x] = true;

                    // take current index three times
                    if (c + 3 <= 3)
                        ndp[c + 3][x ^ v] = true;
                }
            }

            dp = move(ndp);
        }

        int ans = 0;
        for (bool ok : dp[3])
            ans += ok;

        return ans;
    }
};
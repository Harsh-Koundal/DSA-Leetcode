class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        vector<int> suffix(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        // i goes backwards
        for (int i = n - 1; i >= 0; i--) {

            for (int M = n; M >= 1; M--) {

                for (int X = 1; X <= 2 * M && i + X <= n; X++) {

                    int nextM = max(M, X);

                    int current =
                        suffix[i] - dp[i + X][nextM];

                    dp[i][M] = max(dp[i][M], current);
                }
            }
        }

        return dp[0][1];
    }
};
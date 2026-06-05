class Solution {
public:

    struct Node {
        long long ways;
        long long waviness;
    };

    string s;

    Node dp[20][11][11][2][2];
    bool vis[20][11][11][2][2];

    Node solve(int pos, int prev2, int prev1,
               bool tight, bool started) {

        if (pos == s.size()) {
            return {1, 0};
        }

        if (vis[pos][prev2 + 1][prev1 + 1][tight][started])
            return dp[pos][prev2 + 1][prev1 + 1][tight][started];

        vis[pos][prev2 + 1][prev1 + 1][tight][started] = true;

        Node ans = {0, 0};

        int limit = tight ? s[pos] - '0' : 9;

        for (int d = 0; d <= limit; d++) {

            bool newTight = tight && (d == limit);

            if (!started && d == 0) {

                Node nxt = solve(pos + 1, -1, -1,
                                 newTight, false);

                ans.ways += nxt.ways;
                ans.waviness += nxt.waviness;
            }
            else {

                int add = 0;

                if (prev2 != -1) {

                    if ((prev1 > prev2 && prev1 > d) ||
                        (prev1 < prev2 && prev1 < d)) {
                        add = 1;
                    }
                }

                Node nxt = solve(pos + 1,
                                 prev1,
                                 d,
                                 newTight,
                                 true);

                ans.ways += nxt.ways;

                ans.waviness += nxt.waviness
                                + (long long)add * nxt.ways;
            }
        }

        return dp[pos][prev2 + 1][prev1 + 1][tight][started] = ans;
    }

    long long calc(long long x) {

        if (x < 0)
            return 0;

        s = to_string(x);

        memset(vis, false, sizeof(vis));

        return solve(0, -1, -1, true, false).waviness;
    }

    long long totalWaviness(long long num1, long long num2) {

        return calc(num2) - calc(num1 - 1);
    }
};
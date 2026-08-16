class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0};

        // Count stones based on remainder when divided by 3
        for (int x : stones) {
            cnt[x % 3]++;
        }

        // No remainder-0 stones
        if (cnt[0] % 2 == 0) {
            return cnt[1] > 0 && cnt[2] > 0;
        }

        // Odd number of remainder-0 stones
        return abs(cnt[1] - cnt[2]) > 2;
    }
};
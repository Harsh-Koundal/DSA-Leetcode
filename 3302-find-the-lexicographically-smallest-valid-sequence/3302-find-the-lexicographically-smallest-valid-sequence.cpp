class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<int> ans(m);

        // last[j] = latest index in word1 where word2[j]
        // can be matched while still matching word2[j+1...]
        vector<int> last(m, -1);

        // Build suffix matching information.
        int i = n - 1;
        int j = m - 1;

        while (i >= 0 && j >= 0) {
            if (word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }
            i--;
        }

        // We can use at most one mismatch.
        bool canSkip = true;

        j = 0;

        for (i = 0; i < n; i++) {

            if (j == m)
                break;

            // Case 1:
            // Current character matches word2[j].
            if (word1[i] == word2[j]) {
                ans[j] = i;
                j++;
            }

            // Case 2:
            // Current character does NOT match.
            // We can use our one allowed mismatch here,
            // but only if the remaining word2 can still be matched.
            else if (canSkip &&
                     (j == m - 1 || i < last[j + 1])) {

                canSkip = false;

                ans[j] = i;
                j++;
            }
        }

        if (j == m)
            return ans;

        return {};
    }
};
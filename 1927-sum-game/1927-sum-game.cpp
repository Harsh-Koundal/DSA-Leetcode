class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();

        int firstSum = 0;
        int secondSum = 0;

        int q1 = 0;
        int q2 = 0;

        // First half
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?') {
                q1++;
            } else {
                firstSum += num[i] - '0';
            }
        }

        // Second half
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?') {
                q2++;
            } else {
                secondSum += num[i] - '0';
            }
        }

        int sumDiff = firstSum - secondSum;
        int questionDiff = q2 - q1;

        return 2 * sumDiff != 9 * questionDiff;
    }
};
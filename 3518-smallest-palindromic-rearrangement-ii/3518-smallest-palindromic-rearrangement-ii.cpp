class Solution {
public:
    const long long LIMIT = 1000000;

    long long combCap(int n, int r) {
        r = min(r, n - r);
        long long res = 1;

        for (int i = 1; i <= r; i++) {
            long long num = n - r + i;
            long long den = i;

            long long g = std::gcd(num, den);
            num /= g;
            den /= g;

            g = std::gcd(res, den);
            res /= g;
            den /= g;

            res *= num;
            if (res > LIMIT) return LIMIT;
        }

        return res;
    }

    long long countWays(vector<int> &cnt) {
        int rem = 0;
        for (int x : cnt) rem += x;

        long long ans = 1;

        for (int x : cnt) {
            if (x == 0) continue;

            long long ways = combCap(rem, x);

            if (ans >= LIMIT || ways >= LIMIT) return LIMIT;

            ans *= ways;
            if (ans > LIMIT) return LIMIT;

            rem -= x;
        }

        return ans;
    }

    string smallestPalindrome(string s, int k) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        vector<int> half(26, 0);
        string mid = "";

        for (int i = 0; i < 26; i++) {
            half[i] = freq[i] / 2;
            if (freq[i] % 2)
                mid.push_back(char('a' + i));
        }

        if (countWays(half) < k) return "";

        int halfLen = s.size() / 2;
        string left;

        for (int pos = 0; pos < halfLen; pos++) {
            for (int c = 0; c < 26; c++) {
                if (half[c] == 0) continue;

                half[c]--;

                long long ways = countWays(half);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
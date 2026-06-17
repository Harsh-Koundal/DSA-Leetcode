class Solution {
public:
    char processStr(string s, long long k) {

        int n = s.size();
        vector<long long> len(n);
        long long curr = 0;

        for(int i=0;i<n;i++){
            char ch = s[i];

            if(ch == '*'){
                if(curr>0) curr--;
            }
            else if(ch == '#') curr *= 2;

            else if(ch == '%'){}

            else{
                curr++;
            }
            len[i] = curr;
        }
        if(k>= curr) return '.';

        for(int i=n-1;i>=0;i--){
            char ch = s[i];

            long long prevLen = (i == 0 ? 0 : len[i - 1]);

             if (ch >= 'a' && ch <= 'z') {
                if (k == prevLen) {
                    return ch;
                }
            }
            else if (ch == '#') {
                if (prevLen > 0) {
                    k %= prevLen;
                }
            }
            else if (ch == '%') {
                if (prevLen > 0) {
                    k = prevLen - 1 - k;
                }
            }
            else if (ch == '*') {
            }
        }

        return '.';
        }
};
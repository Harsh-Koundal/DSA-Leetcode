class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long product = 0;

        string s = to_string(n);

        for(char ch : s){
            int digit = ch-'0';

            if(digit != 0){
                sum += digit;
                product = product * 10 + digit;
            }
        }
        return sum*product;
    }
};
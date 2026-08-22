class Solution {
public:
    bool checkDivisibility(int n) {
        string s = to_string(n);

        int sum = 0;
        int product = 1;

        for(int i=0;i<s.length();i++){
            int digit = s[i]-'0';
            sum += digit;
            product *= digit;
        }
        
        int total = sum + product;

       return n%total==0;
    }
};
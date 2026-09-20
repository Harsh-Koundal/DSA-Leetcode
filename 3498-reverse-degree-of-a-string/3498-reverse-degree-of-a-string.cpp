class Solution {
public:
    int reverseDegree(string s) {
        int i = 1;
        int sum = 0;

        for (char ch : s) {
           int reverseValue = 'z' - ch + 1;

           sum += reverseValue * i;
           i++;
        }

        return sum;
    }
};
class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum = "";
        int j = num2.length()-1;
        int i = num1.length()-1;
        int carry = 0;

        while (i >= 0 || j>= 0 || carry){
            int n1 = 0;
            int n2 = 0;

            if(i>=0){
                n1 = num1[i] - '0';
                i--;
            }

            if(j>=0){
                n2 = num2[j] - '0';
                j--;
            }

            int total = n1 + n2 + carry;

            carry = total/10;

            sum = char((total%10)+'0') + sum;

        }
        return sum;
    }
};
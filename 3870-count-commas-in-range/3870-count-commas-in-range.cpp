class Solution {
public:
    int countCommas(int n) {
        int count = 0;

        string s = to_string(n);

        if(s.length() < 3)
         return count;

        while(n>=1000){
            count++;
            n--;
        }

        return count;
    }
};
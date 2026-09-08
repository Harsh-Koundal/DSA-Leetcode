class Solution {
public:
    int countCommas(int n) {
        int count = 0;

        if(n < 1000)
         return count;

        while(n>=1000){
            count++;
            n--;
        }

        return count;
    }
};
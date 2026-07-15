class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0;
        int evenSum = 0;
        int j = 1;
        int k = 2;
        for(int i=0;i<n;i++){
            oddSum += j;
            j += 2;
            evenSum += k;
            k += 2;
        }
        return gcd(oddSum,evenSum);
    }
};
class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);

        long long ans = 0;

        while(a >= b){

            int count = 0;

            while(a >= (b << (count+1))){
                count++;
            }

            ans += (1LL << count);

            a -= (b << count);
        }

        if((dividend<0) ^ (divisor<0))
            ans = -ans;

        return (int)ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = prices[0];
        int maxPrice = prices[n-1];
        vector<int> leftProfit(n,0);
        vector<int> rightProfit(n,0);
        int maxProfit = INT_MIN;


        for(int i=1;i<n;i++){
            int profit = prices[i] - minPrice;
            minPrice = min(prices[i],minPrice);
            leftProfit[i] = max(leftProfit[i-1],profit);
        }
        for(int i=n-2;i>0;i--){
            int profit = maxPrice - prices[i];
            maxPrice = max(prices[i],maxPrice);
            rightProfit[i] = max(rightProfit[i+1],profit);
        }

        for(int i=0;i<n;i++){
            maxProfit = max(maxProfit,leftProfit[i]+rightProfit[i]);
        }
        return maxProfit;
    }
};
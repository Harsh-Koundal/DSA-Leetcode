class Solution {
public:
    
    int solve(int day, bool canBuy, int transactionsLeft, vector<int>& prices, vector<vector<vector<int>>>& dp){
        
        if(day==prices.size())
        return 0;

        if(transactionsLeft == 0)
        return 0;

        if(dp[day][canBuy][transactionsLeft] != -1)
        return dp[day][canBuy][transactionsLeft];

        if(canBuy){
            int buy = -prices[day] + solve(day+1,false,transactionsLeft,prices,dp);

            int skip = solve(day+1,true,transactionsLeft,prices,dp);

            return dp[day][canBuy][transactionsLeft] = max(buy,skip);
        }else{
            int sell = prices[day] + solve(day+1,true,transactionsLeft-1,prices,dp);

            int skip = solve(day+1,false,transactionsLeft,prices,dp);

            return dp[day][canBuy][transactionsLeft] = max(sell,skip);
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(
            n,
            vector<vector<int>>(2,
            vector<int>(k+1,-1))
        );

        return solve(0,true,k,prices,dp);
    }
};
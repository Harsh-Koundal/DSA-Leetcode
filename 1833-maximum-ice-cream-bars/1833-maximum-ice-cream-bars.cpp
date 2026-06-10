class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxBars = 0;

        sort(costs.begin(),costs.end());

        for(int i=0;i<costs.size();i++){
            if(costs[i] <= coins){
                maxBars++;
                coins -= costs[i];
            }
        }
        return maxBars;
    }
};
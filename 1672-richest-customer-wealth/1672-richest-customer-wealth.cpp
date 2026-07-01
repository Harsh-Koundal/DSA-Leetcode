class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWelth = INT_MIN;

        for(auto account : accounts){
        int currWelth = 0;
            for(int i=0;i<account.size();i++){
                currWelth += account[i];
            }
                maxWelth = max(currWelth,maxWelth);
        }
        return maxWelth;
    }
};
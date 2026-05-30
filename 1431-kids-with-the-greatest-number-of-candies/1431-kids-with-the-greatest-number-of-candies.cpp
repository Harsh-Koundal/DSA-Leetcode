class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> gratest;
        int maxc=0;
        for(int i=0;i<candies.size();i++){
            maxc = max(candies[i],maxc);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= maxc) gratest.push_back(true);
            else gratest.push_back(false);
        }
        return gratest;
    }
};
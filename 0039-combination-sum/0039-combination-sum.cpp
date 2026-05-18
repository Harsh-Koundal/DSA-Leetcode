class Solution {
public:

    void solve(vector<int>& candidates, int target, int i, vector<int>& temp, vector<vector<int>>& sum){
        if(target==0){
            sum.push_back(temp);
            return;
        }

        if(target<0 || i>= candidates.size())
        return;

        temp.push_back(candidates[i]);
        solve(candidates,target-candidates[i],i,temp,sum);

        temp.pop_back();

        solve(candidates,target,i+1,temp,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sum;
        vector<int> temp;

        solve(candidates,target,0,temp,sum);

        return sum;
    }
};
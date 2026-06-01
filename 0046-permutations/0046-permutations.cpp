class Solution {
public:

    vector<vector<int>> ans;
    
    void backtrack(vector<int>& nums,vector<int>& temp, vector<bool>& used){
        if(temp.size()==nums.size()){
            ans.push_back({temp});
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(used[i])
            continue;

            temp.push_back(nums[i]);
            used[i] = true;

            backtrack(nums,temp,used);
            temp.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> used(nums.size(),false);

        backtrack(nums,temp,used);

        return ans;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(),nums.end());
        int steps = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<maxEle) steps += maxEle - nums[i];
        }

        return steps;
    }
};
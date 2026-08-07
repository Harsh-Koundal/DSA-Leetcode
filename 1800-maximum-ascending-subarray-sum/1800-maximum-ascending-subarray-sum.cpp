class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currentSum = nums[0];
        int ans = nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                currentSum += nums[i];
            }else{
                currentSum = nums[i];
            }
            ans = max(ans,currentSum);
        }
        return ans;
    }
};
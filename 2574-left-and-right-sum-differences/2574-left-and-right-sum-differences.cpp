class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
         vector<int> leftSum(n,0);
         vector<int> rightSum(n,0);

         int prefix = 0;
         for(int i=0;i<nums.size();i++){
            leftSum[i] = prefix;
            prefix += nums[i];
         }

         int suffix = 0;
         for(int i=nums.size()-1;i>=0;i--){
            rightSum[i] = suffix;
            suffix += nums[i];
         }

         for(int i=0;i<nums.size();i++){
            nums[i] = abs(leftSum[i] - rightSum[i]);
         }

         return nums;
    }
};
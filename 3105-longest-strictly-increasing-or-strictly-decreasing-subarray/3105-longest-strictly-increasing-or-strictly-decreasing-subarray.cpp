class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int inc = 1, dec = 1;
        for(int i=1;i<nums.size();i++){
            int currentMax = 0;
            if(nums[i] > nums[i-1]) {
                inc++;
                dec=1;
            }
            else if(nums[i] < nums[i-1]){
                dec++;
                inc = 1;
            }
            else if(nums[i] == nums[i-1]){
                inc=1;
                dec=1;
            }

            currentMax = max(inc, dec);
            ans = max(ans,currentMax);
        }

        return ans;
    }
};
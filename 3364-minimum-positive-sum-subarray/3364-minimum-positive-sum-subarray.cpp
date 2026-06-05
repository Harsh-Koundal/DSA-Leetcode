class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;

        for(int k = l; k <= r;k++){
            int windowSum = 0;
            
            for(int i=0;i<k;i++){
                windowSum += nums[i];
            }

            if(windowSum>0)
            ans = min(ans,windowSum);

            for(int i=k;i<nums.size();i++){
                windowSum += nums[i];
                windowSum -= nums[i-k];

                if(windowSum > 0){
                    ans = min(ans,windowSum);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
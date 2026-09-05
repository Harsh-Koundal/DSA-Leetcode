class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> suffixNum(n);
        suffixNum[n-1] = nums[n-1];

        for(int i=n-2;i>=0;i--){
            suffixNum[i] = min(nums[i], suffixNum[i+1]);
        }

        int maxNum = INT_MIN;

        for(int i=0;i<n;i++){
            maxNum = max(nums[i],maxNum);

            if(maxNum - suffixNum[i] <= k){
                return i;
            }
        }
        
        return -1;
    }
};
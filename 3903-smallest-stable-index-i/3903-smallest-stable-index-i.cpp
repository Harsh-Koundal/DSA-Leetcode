class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size()-1;
        int maxNum = INT_MIN;

        for(int i=0;i<nums.size();i++){
            int minNum = INT_MAX;
            int j = 0;
            int x = i;

            while(j<=i){
                maxNum = max(nums[j],maxNum);
                j++;
            }

            while(x<=n){
                minNum = min(nums[x],minNum);
                x++;
            }

            int score = maxNum - minNum;
            if(score <= k){
                return i;
            }
        }
        return -1;
    }
};
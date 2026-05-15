class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int res = INT_MAX;

        for(int i=0;i<nums.size();i++){
           res = min(res,nums[i]);
        }

        return res;
    }
};
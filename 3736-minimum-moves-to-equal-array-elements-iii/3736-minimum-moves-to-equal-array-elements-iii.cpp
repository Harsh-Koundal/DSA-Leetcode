class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int count = 0;

        int maxEle = nums[nums.size()-1];
        int i = 0;
        while(nums[i] < maxEle){
            nums[i]++;
            if(nums[i] == maxEle){
                i++;
            }
            count++;
        }

        return count;
    }
};
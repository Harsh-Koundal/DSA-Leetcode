class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int i = 0;

        while(i<nums.size()){
            int correctIdx = nums[i] - 1;

            if(nums[i] != nums[correctIdx]){
                swap(nums[i],nums[correctIdx]);
            }else{
                i++;
            }
        }

        int j = 0;
        while(j<nums.size()){
            if(nums[j] != j+1){
                ans.push_back(j+1);
            }
            j++;
        }
        return ans;
    }
};
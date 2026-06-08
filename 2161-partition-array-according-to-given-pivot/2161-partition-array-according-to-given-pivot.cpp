class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lesser;
        vector<int> greater;
        vector<int> equal;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > pivot){
                greater.push_back(nums[i]);
            }
            else if(nums[i] < pivot){
                lesser.push_back(nums[i]);
            }
            else{
                equal.push_back(nums[i]);

            }
        }

        for(int x : lesser)
        ans.push_back(x);

        for(int x : equal)
        ans.push_back(x);

        for(int x : greater) 
        ans.push_back(x);

        return ans;
    }
};
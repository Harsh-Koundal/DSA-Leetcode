class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            string str = to_string(nums[i]);
            int digit = 0;

            for(char ch : str){
                digit += ch - '0';
            }

            if(digit == i) return i;
        }

        return -1;
    }
};
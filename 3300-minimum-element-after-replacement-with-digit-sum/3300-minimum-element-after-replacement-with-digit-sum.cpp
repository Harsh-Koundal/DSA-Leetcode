class Solution {
public:
    int minElement(vector<int>& nums) {
        int num = INT_MAX;
        string temp = "";

        for(int i=0;i<nums.size();i++){
            temp = to_string(nums[i]);
            int sum = 0;
            for(char ch : temp){
                sum += ch-'0';
            }
                num = min(num,sum);
        }
        return num;
    }
};
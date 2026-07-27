class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;

        for(int num : nums){
            int digit = num;

            if(num>=first){
                second = first;
                first = digit;
            }
            else if(num>second){
                second = digit;
            }
        }

        return ((first-1)*(second-1));
    }
};
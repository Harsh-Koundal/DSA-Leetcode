class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;

        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;


        for(int num : nums){
            int digit = num;
            if(digit >= first){
                third = second;
                second = first;
                first = digit;
            }
            else if(digit >= second){
                third = second;
                second = digit;
            }
            else if(digit > third){
                third = digit;
            }

            if(num<=smallest){
                secondSmallest = smallest;
                smallest = num;
            }
            else if(num<secondSmallest){
                secondSmallest = num;
            }
        }
        return max(first*second*third,first*smallest*secondSmallest);
    }
};
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddCount = 0;
        int evenCount = 0;

        for(int num : nums1){
            if(num%2==0){
                evenCount++;
            }else{
                oddCount++;
            }
        }

        if(nums1.size()==evenCount || nums1.size()==oddCount){
            return true;
        }

        return true;
    }
};
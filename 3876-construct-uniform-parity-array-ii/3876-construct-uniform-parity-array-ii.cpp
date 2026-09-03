class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int oddCount = 0;
       int evenCount = 0;
       
       int smallestOdd = INT_MAX;

       for(int num : nums1){
        if(num%2==0){
            evenCount++;
        }else{
            oddCount++;
            smallestOdd = min(smallestOdd, num);

        }
       } 

       if(oddCount == nums1.size() || evenCount == nums1.size())
        return true;

       vector<int> nums2;

       for(int i=0;i<nums1.size();i++){
        if(nums1[i]%2==0){
            if(nums1[i] - smallestOdd >= 1){
                nums2.push_back(nums1[i] - smallestOdd);
            }else{
                return false;
            } 
        }else{
            nums2.push_back(nums1[i]);
        }
       }

       oddCount = 0;
       evenCount = 0;

       for(int num : nums2){
        if(num%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
       }

       if(oddCount == nums2.size() || evenCount == nums2.size())
        return true;

      return false;
    }
};
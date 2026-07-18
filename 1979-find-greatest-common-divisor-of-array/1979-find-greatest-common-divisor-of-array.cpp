class Solution {
public:
    int findGCD(vector<int>& nums) {
      int mini = INT_MAX;
      int maxi = INT_MIN;

      for(int x : nums){
        mini = min(mini,x);
        maxi = max(maxi,x);
      }  

      return gcd(mini,maxi);
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        int pairs = n/2;
        
        vector<int> diff(2*limit + 2,0);

        for(int i=0;i<pairs;i++){

            int a =  min(nums[i],nums[n-1-i]);
            int b = max(nums[i],nums[n-1-i]);

            diff[a+1] -= 1;
            diff[b+limit + 1] += 1;

            diff[a+b] -= 1;
            diff[a+b+1] += 1;
        }

        int ans = INT_MAX;
        int curr = 2 * pairs;

        for(int sum = 2;sum <=2*limit;sum++){
            curr += diff[sum];
            ans = min(ans, curr);
        }

        return ans;
    }
};
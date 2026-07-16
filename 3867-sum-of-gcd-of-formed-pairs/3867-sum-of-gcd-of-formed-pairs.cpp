class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = INT_MIN;
        vector<int> prefixgcd;
        for(int x : nums){
            mx = max(mx,x);
            prefixgcd.push_back(gcd(x,mx));
        }

        sort(prefixgcd.begin(),prefixgcd.end());

        long long ans = 0;

        int i = 0;
        int j = prefixgcd.size()-1;

        while(i<j){
            ans += gcd(prefixgcd[i],prefixgcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};
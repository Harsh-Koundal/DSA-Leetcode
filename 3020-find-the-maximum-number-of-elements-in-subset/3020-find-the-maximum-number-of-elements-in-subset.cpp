class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;
        for(int num : nums)
           freq[num]++;

        int ans = 1;

        for(auto &[num,cnt] : freq){
            if(num == 1){
                if(cnt % 2 == 0)
                ans = max(ans,cnt-1);
                else ans = max(ans,cnt);
                continue;
            }

            long long curr = num;
            int len = 0;
            while(freq.count(curr)){
                if(freq[curr] >= 2 && freq.count(curr * curr))
{
    len += 2;
    curr *= curr;
}
else
{
    len++;
    break;
}
            }
            ans = max(ans,len);
        }
        return ans;
    }
};
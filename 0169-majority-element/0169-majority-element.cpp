class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int candidate = 0, count=0;
    unordered_map<int,int> mp;
    
    for(int num : nums)
    mp[num]++;

    for(auto it : mp){
        if(it.second > count){
            candidate = it.first;
            count = it.second;
        }
    }
    return candidate;

    }
};
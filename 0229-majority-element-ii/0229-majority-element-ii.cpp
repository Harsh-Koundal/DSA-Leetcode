class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> majorityEle;
        
        for(int num : nums)
        mp[num]++;

        for(auto it : mp){
                if(it.second>nums.size()/3){
                majorityEle.push_back(it.first);
            }
        }
        return majorityEle;
    }
};
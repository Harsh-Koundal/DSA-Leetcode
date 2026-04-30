class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int candidate=0,count = 0;
    unordered_map<int,int>freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    
    for(auto x : freq){
        if(x.second > count){
            count = x.second;
            candidate = x.first;
        }
    }
    return candidate;

    }
};
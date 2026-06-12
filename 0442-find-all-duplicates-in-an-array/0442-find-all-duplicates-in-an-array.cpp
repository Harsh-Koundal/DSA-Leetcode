class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> res;

        for(int num : nums){
            freq[num]++;
        }

        for(auto it : freq){
            if(it.second > 1){
                res.push_back(it.first);
            }
        }
        
        return res;
    }
};
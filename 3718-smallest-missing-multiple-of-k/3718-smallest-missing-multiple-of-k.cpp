class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> mp;

        for(int num:nums){
            mp.insert(num);
        }

        int multiple = k;

        while(mp.find(multiple)!=mp.end()){
            multiple += k;
        }

        return multiple;
    }
};
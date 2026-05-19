class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int num : nums){
            string n = to_string(num);
            for(int i=0;i<n.size();i++){
                ans.push_back(n[i]-'0');
            }
        }
        return ans;
    }
};
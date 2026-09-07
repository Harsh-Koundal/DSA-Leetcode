class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> ans;
        vector<int> positions;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                positions.push_back(i);
            }
        }

        for(int q : queries){
            if(q<=positions.size()){
                ans.push_back(positions[q-1]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
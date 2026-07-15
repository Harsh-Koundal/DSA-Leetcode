class Solution {
public:
    string clearDigits(string s) {
        vector<int> mp ={
            1,2,3,4,5,6,7,8,9,0
        };
        string ans = "";

        for(char ch : s){
            if(isdigit(ch)){
                if(!ans.empty())
                ans.pop_back();
            }else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
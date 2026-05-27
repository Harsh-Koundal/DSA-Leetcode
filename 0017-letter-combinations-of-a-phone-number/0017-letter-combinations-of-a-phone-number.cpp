class Solution {
public:

    vector<string> ans;

    void solve(int index,string digits, vector<string>& mp , string curr){
        if(index == digits.size()){
            ans.push_back(curr);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for(char ch : letters){
            curr.push_back(ch);
            solve(index+1,digits,mp,curr);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string> mp(10);
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";

        solve(0, digits, mp, "");

        return ans;
    }
};
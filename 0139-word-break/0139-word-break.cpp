class Solution {
public:
    vector<int> dp;

    bool solve(int idx, string &s, unordered_set<string>& st){
        if(idx == s.length())
            return true;

        if(dp[idx] != -1)
            return dp[idx];

        string word = "";

        for(int i = idx; i < s.length(); i++){
            word += s[i];

            if(st.count(word)){
                if(solve(i + 1, s, st))
                    return dp[idx] = true;
            }
        }

        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> st(wordDict.begin(), wordDict.end());

        dp.assign(s.length(), -1);

        return solve(0, s, st);
    }
};
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

       for(string word : words){
        int totalWeights = 0;
        for(char ch : word){
         totalWeights += weights[ch - 'a'];
        }
       int mod = totalWeights % 26;

       char mapped = 'z' - mod;

       ans += mapped;

       }
       return ans;
    }
};
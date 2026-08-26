class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int> pos;

        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                pos.push_back(i);
            }
        }

        if(pos.size() < k) return "";

        string ans = "";

        for(int i=0;i+k-1<pos.size();i++){
            int left = pos[i];
            int right = pos[i+k-1];

            string current = s.substr(left,right-left+1);

            if(ans == ""){
                ans = current;
            }
            else if(ans.length() > current.length()){
                ans = current;
            }
            else if(ans.length() == current.length() && ans>current){
                ans = current;
            }
        }

        return ans;
    }
};
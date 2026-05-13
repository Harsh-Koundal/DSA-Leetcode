class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        
        for(int k =0;k<s.length();k++){
            s = s.substr(1) + s[0];

            if(s==goal) return true;
        }
        return false;
    }
};
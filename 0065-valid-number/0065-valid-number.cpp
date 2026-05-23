class Solution {
public:
    bool isNumber(string s) {
        bool hasDigit = false;
        bool hasDot = false;
        bool hasE = false;

        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
            hasDigit = true;
            }
            else if(s[i]=='.'){
                if(hasDot || hasE)
                return false;
                hasDot = true;
            }
            else if(s[i]=='e' || s[i] == 'E'){
                if(hasE || !hasDigit){
                    return false;
                }
                hasE = true;
                hasDigit = false;
            }
            else if(s[i]=='+' || s[i]=='-'){
                if(i==0) continue;
                if(s[i-1] != 'e' && s[i-1] != 'E')
                return false;
            }
            else{
                return false;
            }
        }
        return hasDigit;
    }
};
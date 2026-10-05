class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        string str = "";
        if(s.length() == 1) return 1;

        for(int i=0;i<s.length();i++){
            int length = 1;
            str = s[i];

            for(int j=i+1;j<s.length();j++){
                if(str.contains(s[j])){
                    break;
                }
                str += s[j];
                length = str.length();
            }

            maxLength = max(maxLength,length);
        }

        return maxLength;
    }
};
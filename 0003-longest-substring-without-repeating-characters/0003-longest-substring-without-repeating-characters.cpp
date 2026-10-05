class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        if(s.length() == 1) return 1;
        int left = 0;
        unordered_set<char> mp;

        for(int right = 0;right<s.length();right++){
            while(mp.find(s[right]) != mp.end()){
                mp.erase(s[left]);
                left++;
            }
            mp.insert(s[right]);
            
            maxLength = max(maxLength,right-left+1);
        }

        return maxLength;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

         int freq[26] = {};

        for(char ch : s){
            freq[ch-'a']++;
        }

        for(char ch : t){
            freq[ch-'a']--;
        }

        for(int count : freq){
            if(count != 0)
             return false;
        }

        return true;
    }
};
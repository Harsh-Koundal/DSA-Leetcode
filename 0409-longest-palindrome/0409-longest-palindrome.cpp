class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        for(char ch : s){
            freq[ch]++;
        }

        int length = 0;
        bool hasOdd = false;

        for(auto &[ch,count] : freq){
            length += (count/2)*2;

            if(count%2==1){
                hasOdd = true;
            }
        }
        if(hasOdd){
            length += 1;
        }

        return length;
    }
};
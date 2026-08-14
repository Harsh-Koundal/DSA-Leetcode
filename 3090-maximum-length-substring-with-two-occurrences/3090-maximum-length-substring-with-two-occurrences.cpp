class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxL = INT_MIN;

        unordered_map<char,int> freq;

        while(right<s.length()){
            freq[s[right]]++;

            while(freq[s[right]] > 2){
                freq[s[left]]--;
                left++;
            }
            right++;
            maxL = max(maxL, right-left);
        }

        return maxL;
    }
};
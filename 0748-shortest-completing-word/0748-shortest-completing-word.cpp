class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
         vector<int> target(26,0);

         for(char ch : licensePlate){
            if(isalpha(ch)){
                target[tolower(ch)-'a']++;
            }
         }

         string result;
         int minLen = INT_MAX;

         for(string word : words){
            vector<int> freq(26,0);

            for(char ch : word){
                freq[ch-'a']++;

                bool valid = true;

                for(int i=0;i<26;i++){
                    if(freq[i] < target[i]){
                        valid = false;
                        break;
                    }
                }
                if(valid && word.length() < minLen){
                    result = word;
                    minLen = word.length();
                }
            }
         }
         return result;
    }
};
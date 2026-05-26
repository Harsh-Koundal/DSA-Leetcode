class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> lower;
        unordered_set<char> upper;
        int count = 0;

        for(char ch : word){
            if(islower(ch)){
                lower.insert(ch);
            }else{
                upper.insert(tolower(ch));
            }
        }

        for(char ch : lower){
            if(upper.count(ch)){
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        string strs = "";

        for(char ch : s){
            if(isalnum(ch)){
                strs += tolower(ch);
            }
        }

        int left = 0;
        int right = strs.length()-1;

        while(left<right){
            if(strs[left] != strs[right])
             return false;

            left++;
            right--;
        }
        return true;
    }
};
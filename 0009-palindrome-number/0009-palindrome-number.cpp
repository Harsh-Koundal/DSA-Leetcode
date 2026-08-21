class Solution {
public:
    bool isPalindrome(int x) {
        string n = to_string(x);
        int left  = 0;
        int right = n.length()-1;

        while(left<right){
            if(n[left] != n[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
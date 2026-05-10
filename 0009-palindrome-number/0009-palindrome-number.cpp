class Solution {
public:
    bool isPalindrome(int x) {
      string n = to_string(x);
      int right = n.length()-1;
      int left = 0;
      while(left<right){
        if(n[left] != n[right]) return false;
        right--;
        left++;
      }
      return true;
    }
};
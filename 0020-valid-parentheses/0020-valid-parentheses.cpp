class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> map = {
            {')','('},
            {'}','{'},
            {']','['},
        };

        stack<char> st;

        for(char ch : s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }else{
                if(st.empty() || st.top() != map[ch]){
                return false;
                }
                st.pop();
            }
        }
            return st.empty();
    }
};
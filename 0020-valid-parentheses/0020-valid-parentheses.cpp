class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(char ch : s){
            if(ch =='(' || ch == '{' || ch == '['){
                stack.push_back(ch);
            }else{
                if(stack.empty()) return false;
                char top = stack.back();
                stack.pop_back();
                if(ch == ')' && top != '(')return false;
                if(ch == '}' && top != '{') return false;
                if(ch == ']' && top != '[') return false;
            }

        }
    return stack.empty();
    }
};
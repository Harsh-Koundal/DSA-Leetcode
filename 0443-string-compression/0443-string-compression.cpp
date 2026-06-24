class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int i = 0;

        while(i<n){
            char curr = chars[i];
            int count = 0;

            while(i<n && chars[i] == curr){
                count++;
                i++;
            }

            chars[write++] = curr;

            if(count > 1){
                string cnt = to_string(count);

                for(char ch : cnt){
                    chars[write++] = ch;
                }
            }
        }

        return write;
    }
};
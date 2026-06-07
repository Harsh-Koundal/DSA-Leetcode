class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";

        for(int step = 2;step<=n;step++){
            string temp = "";

            for(int i=0;i<ans.size();i++){
                int count = 1;

                while(i+1<ans.size() && ans[i] == ans[i+1]){
                    count++;
                    i++;
                }

                temp += to_string(count);
                temp += ans[i];
            }

            ans = temp;

        }
        return ans;
    }
};
class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(26,0);
        vector<bool> visited(26,false);

        for(char ch : s)
         freq[ch-'a']++;

        string st;
        
        for(char ch : s){
            freq[ch - 'a']--;

            if(visited[ch-'a']) continue;

            while(!st.empty() && ch<st.back()&& freq[st.back() - 'a'] > 0){
                visited[st.back() - 'a'] = false;
                st.pop_back();
            }
            st.push_back(ch);
            visited[ch - 'a'] = true;
        }

        return st;
    }
};
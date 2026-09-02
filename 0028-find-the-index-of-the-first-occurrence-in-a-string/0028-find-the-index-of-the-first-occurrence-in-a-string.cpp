class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if(n<m) return -1;

        for(int i=0;i<=n-m;i++){
            int j = 0;

            while(j<m && haystack[i+j] == needle[j]){
                j++;
            }

            if(j==m){
                return i;
            }
        }
        return -1;
    }
};
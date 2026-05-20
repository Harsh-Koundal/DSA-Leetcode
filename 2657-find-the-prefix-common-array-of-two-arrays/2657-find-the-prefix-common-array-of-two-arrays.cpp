class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int count = 0;
        vector<int> freq(n+1,0);
        vector<int> res(n);

        for(int i=0;i<n;i++){
            freq[A[i]]++;
            if(freq[A[i]]==2){
                count++;
            }
            freq[B[i]]++;
            if(freq[B[i]]==2){
                count++;
            }

            res[i] = count;
        }

        return res;
        
    }
};
class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest = -1;
        vector<int> res;
        
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i]))
            res.push_back(s[i] - '0');
        }

        for(int i=0;i<res.size();i++){
            if(res[i]>largest){
                secondLargest = largest;
                largest = res[i];
            }
            else if(res[i]>secondLargest && res[i] != largest){
                secondLargest = res[i];
            }
        }
        return secondLargest;
    }
};
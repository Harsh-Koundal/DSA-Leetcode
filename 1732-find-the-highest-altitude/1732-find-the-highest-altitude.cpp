class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlti = 0;
        int current = 0;

        for(int i=0;i<gain.size();i++){
            current += gain[i];
            maxAlti = max(maxAlti,current);
        }
        return maxAlti;
    }
};
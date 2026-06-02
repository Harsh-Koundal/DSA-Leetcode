class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;

        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){
                int landFinish = landStartTime[i] + landDuration[i];
                int waterBegin = max(waterStartTime[j] ,landFinish);

                int finish1 = waterBegin + waterDuration[j];

                int waterFinish = waterStartTime[j] + waterDuration[j];

                int landStart = max(waterFinish,landStartTime[i]);

                int finish2 = landStart + landDuration[i];
                
                ans = min(ans,min(finish1,finish2));


            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        vector<pair<int,int>> temp;

        for(int i=0;i<arr.size();i++){
            temp.push_back({abs(arr[i]-x),arr[i]});
        }

        sort(temp.begin(),temp.end());

        for(auto x : temp){
            if(!k) break;
            k--;
            ans.push_back(x.second);
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};
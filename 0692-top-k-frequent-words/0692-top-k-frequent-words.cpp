class Solution {
public:

   static bool cmp(pair<string,int>&a,pair<string,int>&b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
   }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;

        for(string word : words)
        mp[word]++;

        vector<pair<string,int>> vec;

        for(auto it:mp){
            vec.push_back(it);
        }

        sort(vec.begin(),vec.end(),cmp);

        vector<string> ans;

        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> n = arr;
        vector<int> ans;
        sort(n.begin(),n.end());
        unordered_map<int,int> mp;
       int rank = 1;
       
        for (int x : n) {
           if (mp.find(x) == mp.end()) {
           mp[x] = rank;
           rank++;
    }
}
        for (int x : arr) {
    ans.push_back(mp[x]);
}

        return ans;
    }
};
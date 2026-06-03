class Solution {
public:
    int earliestFinishTime(vector<int>& la, vector<int>& lb, vector<int>& wa, vector<int>& wb) {
        int l = INT_MAX, w = INT_MAX, minL = INT_MAX, minW = INT_MAX;
        int n = la.size(), m = wa.size();

        for (int i = 0; i < n; i++)
            l = min(l, la[i] + lb[i]);

        for (int i = 0; i < m; i++) {
            w = min(w, wa[i] + wb[i]);
            minL = min(minL, max(wa[i], l) + wb[i]);
        }

        for (int i = 0; i < n; i++)
            minW = min(minW, max(la[i], w) + lb[i]);

        return min(minW, minL);
    }
};
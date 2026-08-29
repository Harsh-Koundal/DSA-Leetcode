class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        // Store {value, original index}
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        // Sort by value
        sort(arr.begin(), arr.end());

        int start = 0;

        while (start < n) {
            int end = start;

            // Find the complete connected group
            while (end + 1 < n &&
                   arr[end + 1].first - arr[end].first <= limit) {
                end++;
            }

            // Get original indices
            vector<int> indices;

            for (int i = start; i <= end; i++) {
                indices.push_back(arr[i].second);
            }

            // Sort original indices
            sort(indices.begin(), indices.end());

            // Values are already sorted because arr is sorted
            int k = 0;

            for (int i = start; i <= end; i++) {
                nums[indices[k]] = arr[i].first;
                k++;
            }

            start = end + 1;
        }

        return nums;
    }
};
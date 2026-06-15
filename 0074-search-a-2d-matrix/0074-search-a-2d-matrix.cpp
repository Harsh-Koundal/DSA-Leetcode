class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int> num : matrix){
            int left = 0;
            int right = num.size()-1;
            while(left<=right){
                int mid = left + (right-left) / 2;

                if(num[mid] == target) return true;

                if(num[mid]<target){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
        }
        return false;
    }
};
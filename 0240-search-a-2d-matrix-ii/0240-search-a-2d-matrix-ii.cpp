class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i =0;i<matrix.size();i++){
            int left = 0;
            int right = matrix[i].size()-1;

            while(left<=right){
                int mid = left + (right-left)/2;

                if(matrix[i][mid] == target) return true;

                if(matrix[i][mid] > target){
                    right--;
                }
                if(matrix[i][mid] < target){
                    left++;
                }
            }
        }
            return false;
    }
};
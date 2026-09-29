class Solution {
public:
    void merge(vector<int>& arr, int left, int mid, int right){
        int i = left;
        int j = mid + 1;
        vector<int> temp;
        // Compare elements and merge
        while(i <= mid && j <= right){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }

        // merge leftovers from left halve
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }

        // merge leftovers from right halve
        while(j <= right){
            temp.push_back(arr[j]);
            j++;
        }

        // Now copy the temp elements into arr
        for(int k=0;k<temp.size();k++){
            arr[left+k] = temp[k];
        }
    }
    void mergeSort(vector<int>& arr, int left, int right){
        if(left >= right) return;

        // find mid
        int mid = left + (right-left)/2;

        // Sort left half
        mergeSort(arr,left,mid);

        // Sort right half
        mergeSort(arr,mid+1,right);

        // Now Merge left and right halves
        merge(arr,left,mid,right);
    }
    vector<int> sortArray(vector<int>& arr) {
        if(arr.size() <= 1) return arr;

        mergeSort(arr,0,arr.size()-1);
        return arr;
    }
};
class Solution {
public:
    bool search(vector<vector<int>>& arr, int tgt , int row) {
        int n = arr[0].size();
        int st=0 , end = n-1;
        while(st<=end) {
            int mid = st + (end-st)/2;
            if(tgt == arr[row][mid]) {
                return true;
            }
            else if(tgt > arr[row][mid]) {
                st = mid+1;
            }
            else {
                end = mid -1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& arr, int tgt ) {
        int m = arr.size() , n= arr[0].size();
        int startRow = 0 , endRow = m-1;
        while(startRow <= endRow) {
            int midRow = startRow + (endRow - startRow)/2;

            if ( tgt >= arr[midRow][0] && tgt <= arr[midRow][n-1]) {
                return search(arr,tgt,midRow);
            }
            else if(tgt >= arr[midRow][n-1]) {
                startRow = midRow +1;
            }
            else {
                endRow = midRow - 1;
            }
        }
        return false;
        
    }
};
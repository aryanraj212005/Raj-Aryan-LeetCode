class Solution {
public:
    int searchInsert(vector<int>& arr, int tgt) {
        int n = arr.size();
        int str = 0, end = n-1;
        int mid;

        while (str <= end) {
            mid = str +(end - str)/2;
            if (arr[mid] == tgt) {
                return mid;
            }
            else if (arr[mid] < tgt) {
                str = mid +1; 
            }
            else {
                end = mid - 1;
            }
            
        }
        return str;
    }
};
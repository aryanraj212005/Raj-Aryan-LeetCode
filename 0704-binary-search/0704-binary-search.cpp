class Solution {
public:
    int search(vector<int>& arr, int tgt) {
        int n = arr.size();
        int st=0,end=n-1;
        while(st<=end) {
            int mid = st + (end - st) / 2;
            if(arr[mid] == tgt) {
                return mid;
            }
            else if(arr[mid] > tgt) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
            
        }
        return -1;
    }
};
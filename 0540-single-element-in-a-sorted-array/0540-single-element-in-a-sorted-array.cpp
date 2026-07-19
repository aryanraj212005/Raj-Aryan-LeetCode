class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size() ;
        int st = 0, end = n - 1;

        if (n==1) return arr[0];
        if (arr[0]!=arr[1]) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];

        
        while (st <= end) {
            int mid = st + (end - st) / 2;                

            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }

            if (mid % 2 == 0) {
                if (arr[mid - 1] == arr[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (arr[mid - 1] == arr[mid]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            
        }
        return 0;
    };
};
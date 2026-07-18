class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = 1;
        int count = 0;
        int i = 0;
        while (count < k) {
            if (i<arr.size() && arr[i] == n) {
                i++;
            }
            else {
                count++;
                if (count == k) {
                    return n;
                }
            }
            n++;
        }
        return 0;
    }
};
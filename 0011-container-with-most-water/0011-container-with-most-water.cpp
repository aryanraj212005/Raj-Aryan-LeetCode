class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();

        int st = 0;
        int end = n - 1;
        int most = 0;

        while (st < end) {

            int curr = (end - st) * min(arr[st], arr[end]);

            most = max(most, curr);

            if (arr[st] < arr[end]) {
                st++;
            }
            else {
                end--;
            }
        }

        return most;
    }
};
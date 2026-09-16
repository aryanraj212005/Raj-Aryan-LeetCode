class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        int n = arr.size();

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && arr[i] == arr[i - 1]) continue;

            int st = i + 1;
            int end = n - 1;

            while (st < end) {

                long long sum = (long long)arr[i] + arr[st] + arr[end];

                if (sum == 0) {
                    ans.push_back({arr[i], arr[st], arr[end]});

                    st++;
                    end--;

                    while (st < end && arr[st] == arr[st - 1])
                        st++;

                    while (st < end && arr[end] == arr[end + 1])
                        end--;
                }
                else if (sum > 0) {
                    end--;
                }
                else {
                    st++;
                }
            }
        }

        return ans;
    }
};

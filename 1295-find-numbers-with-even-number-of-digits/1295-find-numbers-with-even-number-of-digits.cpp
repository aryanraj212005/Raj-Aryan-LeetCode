class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int fin = 0;
        for (int i = 0; i < nums.size(); i++) {
            int res = 0;
            int n = nums[i];
            while (n > 0) {
                n = n / 10;
                res += 1;
            }
            if (res % 2 == 0) {
                fin += 1;
            }
        }
        return fin;
    };
};
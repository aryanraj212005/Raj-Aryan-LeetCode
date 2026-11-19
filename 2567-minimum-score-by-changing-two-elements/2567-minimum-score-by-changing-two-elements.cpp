class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n < 3) return 0;
        int first = nums[n-1] - nums[2];
        int sec = nums[n-2] - nums[1];
        int thr = nums[n-3] - nums[0];
        int mini = min(first , sec);
        return min(mini , thr);
    }
};
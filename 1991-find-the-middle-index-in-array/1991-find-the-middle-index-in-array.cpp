class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        for(int i=1;i<nums.size();i++) {
            rightSum += nums[i];
        }
        // rightSum = 14
        int ans = 0;
        if(leftSum == rightSum) return ans;
        int i=0;
        while(leftSum != rightSum && i<nums.size()-1) {
            leftSum += nums[i];
            rightSum -= nums[i+1];
            i++;
            ans++;
        }
        if(leftSum != rightSum) return -1;
        return ans;
    }
};
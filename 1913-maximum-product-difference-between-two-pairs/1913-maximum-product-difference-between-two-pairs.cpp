class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        // {5,6,2.7.4}
        int n = arr.size()-1;
        int min,max,sum;
        sort(arr.begin() , arr.end());
        min = arr[0] * arr[1];
        max = arr[n] * arr[n-1];
        int diff = max-min;
        return diff;
        
    }
};
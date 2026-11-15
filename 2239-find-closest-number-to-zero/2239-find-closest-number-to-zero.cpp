class Solution {
public:
    int findClosestNumber(vector<int>& arr) {
        int neg = INT_MIN;
        int pos = INT_MAX;
        if(arr.size() == 1) return arr[0];
        for(int i=0;i<arr.size();i++) {
            if(arr[i] >= 0) {
                pos = min(pos, arr[i]);
            } else {
                neg = max(neg, arr[i]);
            }
        }
        if(pos == INT_MAX) return neg;
        if(neg == INT_MIN) return pos;
        if( abs(neg) < pos) {
            return neg;
        }
        return pos;
    }
};
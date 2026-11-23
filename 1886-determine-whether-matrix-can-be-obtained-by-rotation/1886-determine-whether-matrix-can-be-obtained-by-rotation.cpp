class Solution {
public:
    bool findRotation(vector<vector<int>>& arr, vector<vector<int>>& tgt) {
        int n=arr.size();
        int count=0;

        if(n==1) return arr == tgt;

        while(arr!=tgt && count<4) {
            for(int i=0;i<n;i++) {
                int st=0,end=n-1;
                while(st<end) {
                    swap(arr[i][st],arr[i][end]);
                    st++;
                    end--;
                }
            }

            for(int i=0;i<n;i++) {
                for(int j=i+1;j<n;j++) {
                    swap(arr[i][j], arr[j][i]);
                }
            }
            count++;
        }
        return arr == tgt;
    }
};
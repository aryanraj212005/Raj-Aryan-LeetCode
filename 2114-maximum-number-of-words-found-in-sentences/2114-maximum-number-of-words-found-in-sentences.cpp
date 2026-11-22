class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            int maxi = 1;
            for(int j=0;j<s[i].size();j++) {
                if(s[i][j] == ' ') {
                    maxi++;
                }
            }
            ans = max(maxi,ans);
        }
        return ans;
    }
};
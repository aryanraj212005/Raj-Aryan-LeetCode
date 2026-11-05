class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int maxi = s.length();
        int mini = 0;

        for(int i=0;i<s.length();i++) {
            if(s[i] == 'D') {
                ans.push_back(maxi);
                maxi--;
            } else {
                ans.push_back(mini);
                mini++;
            }
        }
        ans.push_back(maxi);
        return ans;
    }
};
class Solution {
public:
    int maxDistance(string s) {
        int u=0, d=0, l=0, r=0, us=0;
        for(int i=0;i<s.length();i++) {
            if(s[i] == 'U') {
                u++;
            }
            else if(s[i] == 'D') {
                d++;
            }
            else if(s[i] == 'L') {
                l++;
            }
            else if(s[i] == 'R') {
                r++;
            }
            else {
                us++;
            }
        }
        return abs(l-r) + abs(u-d) + us;
    }
};
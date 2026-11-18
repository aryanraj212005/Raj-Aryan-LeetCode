class Solution {
public:
    bool checkOnesSegment(string s) {
        int p = 0;
        while(p<s.length() && s[p] != '0') {
            p++;
        }
        for(int i=p;i<s.length();i++) {
            if(s[i] == '1') {
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool checkString(string s) {
        int i=0;
        for(int m=0;m<s.length()-1;m++) {
            if(s[i] == 'b' && s[i+1] == 'a') {
                return false;
            } else {
                i++;
            }
        }
        return true;
    }
};
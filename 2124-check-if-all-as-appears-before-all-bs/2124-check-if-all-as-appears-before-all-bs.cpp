class Solution {
public:
    bool checkString(string s) {
        int i=0;
        for(int m=0;m<s.length()-1;m++) {
            int j=i+1;
            if(s[i] == 'b' && s[j] == 'a') {
                return false;
            } else {
                i++;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool checkPalin(const string &s, int st , int end) {
        while(st<end) {
            if(s[st] != s[end]) {
                return false;
            }
            st++; end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int st = 0;
        int maxi = 0;
        int curr = 0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(checkPalin(s,i,j))
                curr = j-i+1;
                if(curr > maxi) {
                    maxi = curr;
                    st = i;
                }
            }
        }
        return s.substr(st , maxi);
    }
};
class Solution {
public:
    bool scoreBalance(string s) {
        int st = 0;
        int mid = 1;
        int end = s.length();
        // st , =mid  && mid , end
        
        while(mid <= end) {
            int ini = 0 , fin = 0;
            for(int i=st;i<mid;i++) {
                ini += s[i] - 96;
            }
            for(int i=mid;i<end;i++) {
                fin += s[i] - 96;
            }
            if(ini == fin) {
                return true;
            }
            else {
                mid++;
            }
        }
        return false;
    }
};
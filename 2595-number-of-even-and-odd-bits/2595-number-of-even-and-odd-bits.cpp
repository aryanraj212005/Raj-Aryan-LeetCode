class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s;
        while(n > 0) {
            if(n % 2 == 0) {
                s.push_back('0');
            } else {
                s.push_back('1');
            }
            n = n/2;
        }
        reverse(s.begin(), s.end());
        int even = 0, odd = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i] == '1') {
                int pos = s.length() - 1 - i;
                if(pos % 2 == 0)
                    even++;
                else
                    odd++;
            
            }
        }
        
        return {even, odd};
    }
};
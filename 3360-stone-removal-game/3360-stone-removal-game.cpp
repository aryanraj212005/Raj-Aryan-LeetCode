class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        int win = 0;
        while (n >= i) {
            n -= i;
            i--;
            win++;
        }
        return win % 2 != 0;
    }
};
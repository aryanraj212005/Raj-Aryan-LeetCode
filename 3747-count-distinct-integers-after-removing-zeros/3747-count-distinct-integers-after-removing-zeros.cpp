class Solution {
public:
    long long countDistinct(long long n) {
        vector<int> ans;
        int dig = 0;
        long long temp = n;
        while(temp > 0) {
            int curr = temp%10;
            ans.push_back(curr);
            temp/=10;
            dig++;
        }
        //dig = 3
        long long total = 0;
        long long fact = 1;

        for(int i=0;i<dig-1;i++) {
            fact *= 9;
            total += fact;
        }

        for(int i=dig-1;i>=0;i--) {
            long long last = ans[i];
            if(last == 0) {
                return total;
            }
            long long smaller = last-1;
            total += smaller*fact;
            fact /= 9;
        }
        return total+1;
    }
};  
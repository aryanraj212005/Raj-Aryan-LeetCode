class Solution {
public:
    vector<int> scoreValidator(vector<string>& s) {
        vector<int> ans;
        int score = 0, counter = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == "0" || s[i] == "1" || s[i] == "2" || s[i] == "3" || s[i] == "4" || s[i] == "6") {
                score += stoi(s[i]);
            }
            if(s[i] == "W") {
                counter += 1;
                if(counter == 10) {
                    ans.push_back(score);
                    ans.push_back(counter);
                    return ans;
                }
            }
            if(s[i] == "WD" || s[i] == "NB") {
                score += 1;
            }
        }
        
        ans.push_back(score);
        ans.push_back(counter);
        return ans;
    }
};
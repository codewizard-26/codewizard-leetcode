class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        string sub;
        int i = 0;
        int maxcnt = 0;
        for (int j = 0; j < s.size(); j++) {
            while (sub.find(s[j]) != string::npos) {
                sub.erase(sub.begin());
                i++;
            }
            sub.push_back(s[j]);
            maxcnt = max(maxcnt, j - i + 1);
        }
        return maxcnt;
    }
};
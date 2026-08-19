class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> m;
        vector<int> ans;
        for (int i : bulbs) {
            m[i]++;
        }
        for (auto i : m) {
            if (i.second % 2)
                ans.push_back(i.first);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
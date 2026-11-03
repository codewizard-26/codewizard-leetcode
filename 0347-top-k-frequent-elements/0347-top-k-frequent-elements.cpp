class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> ans;
        unordered_map<int,int> mpp;
        for(int num:nums){
            mpp[num]++;
        }
       vector<pair<int, int>> freq;
        for (const auto& p : mpp) {
    freq.push_back({p.second, p.first});
}
sort(freq.rbegin(), freq.rend());
for (int i = 0; i < k; i++) {
    ans.push_back(freq[i].second);
}
return ans;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        unordered_map<string,int>mpp;
        for(string c :words){
            mpp[c]++;
        }
        vector<pair<string,int>>freq;
        for(const auto&p :mpp){
            freq.push_back({p.first,p.second});
        }
        sort(freq.begin(),freq.end(),[&](auto& a, auto& b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
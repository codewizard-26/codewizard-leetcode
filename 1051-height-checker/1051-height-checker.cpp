class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int>ans;
       ans.insert(ans.end(), heights.begin(), heights.end());
        int cnt=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=ans[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
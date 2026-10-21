class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long ans=0;
        int a[24];
        for(int i:hours){
            ans+=a[(24-(i%24))%24];
            a[i%24]++;
        }
        return ans;
    }
};
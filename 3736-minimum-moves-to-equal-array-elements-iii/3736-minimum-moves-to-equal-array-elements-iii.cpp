class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int cnt=0;
       int num=nums[nums.size()-1];
       for(int i=0;i<nums.size();i++){
        cnt+=num-nums[i];
       } 
       return cnt;
    }
};
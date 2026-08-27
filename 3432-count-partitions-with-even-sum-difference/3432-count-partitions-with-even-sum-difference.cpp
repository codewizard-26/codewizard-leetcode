class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        int leftSum = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            leftSum += nums[i];
            int rightSum = sum - leftSum;

            if (abs(leftSum - rightSum) % 2 == 0) {
                cnt++;
            }
        }

        return cnt;
    }
};
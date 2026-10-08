class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long total = 0;
        long long leftsum = 0;

        for (int num : nums)
            total += num;

        for (int i = 0; i < nums.size(); i++) {
            if (leftsum == total - leftsum - nums[i])
                return i;

            leftsum += nums[i];
        }

        return -1;
    }
};
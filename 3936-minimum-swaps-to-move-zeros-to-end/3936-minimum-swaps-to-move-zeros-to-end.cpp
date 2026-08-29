class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int cnt = 0;
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            if (nums[i] == 0) {
                if (nums[j] != 0) {
                    cnt++;
                    i++;
                    j--;
                } else {
                    j--;
                }
            } else {
                i++;
            }
        }

        return cnt;
    }
};
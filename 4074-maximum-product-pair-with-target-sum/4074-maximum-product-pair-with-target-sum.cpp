class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
         vector<int> ans = {-1, -1};
        long long maxProd = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j &&
                    nums[i] + nums[j] == target &&
                    nums[i] > nums[j]) {

                    long long prod = 1LL * nums[i] * nums[j];

                    if (prod > maxProd) {
                        maxProd = prod;
                        ans = {i, j};
                    }
                }
            }
        }

        return ans;
    }
};
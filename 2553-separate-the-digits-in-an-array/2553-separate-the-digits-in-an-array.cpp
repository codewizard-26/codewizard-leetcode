
class Solution {
public:
    vector<int> separateDigits(std::vector<int>& nums) {
        vector<int> ans;
        
        for (int num : nums) {
            string numStr = std::to_string(num);
            for (char c : numStr) {
                ans.push_back(c - '0');
            }
        }
        
        return ans;
    }
};

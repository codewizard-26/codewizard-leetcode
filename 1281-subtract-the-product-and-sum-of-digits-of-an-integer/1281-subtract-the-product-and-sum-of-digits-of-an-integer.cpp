class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        string s = to_string(n);
        for (char num : s) {
            int digit = num - '0';
            sum += digit;
            prod *= digit;
        }
        return prod - sum;
    }
};
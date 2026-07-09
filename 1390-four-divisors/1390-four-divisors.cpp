class Solution {
    private:
    void divisors(int num, vector<int>& ans) {
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                ans.push_back(i);
                if (i != num / i)
                    ans.push_back(num / i);
            }
        }
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int num:nums)
        {
        vector<int>ans;
        divisors(num,ans);
        if(ans.size()==4)
        {
            int s=0;
            for(int x:ans)
            {
                s+=x;
                sum+=x;
            }
        }
        }
        return sum;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
    string s=to_string(n);
    for(char c:s)
    {
        if(c=='0')
        {
           s.erase(remove(s.begin(), s.end(), '0'), s.end());
        }
    }
    if (s.empty()) return 0;
    long long ans=stoll(s);
    long long sum=0;
    for(char c:s)
    {
       sum += c - '0';
    }
    return ans*sum;
    }
};
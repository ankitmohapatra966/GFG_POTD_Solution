class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        auto it1 = s1.rbegin();
        auto it2 = s2.rbegin();
        int n = max(s1.size(), s2.size()) + 1;
        string ans(n, 0);
        auto it3 = ans.rbegin();
        int carry = 0, cur = 0;
        while(it3 != ans.rend())
        {
            cur = carry;
            if(it1 != s1.rend())
            {
                cur += *it1 - '0';
                it1++;
            }
            if(it2 != s2.rend())
            {
                cur += *it2 - '0';
                it2++;
            }
            *it3 = cur % 2 + '0';
            carry = cur / 2;
            it3++;
        }
        for(size_t i=0; i<n; i++)
        {
            if(ans[i] == '1')
            {
                return ans.substr(i, n-i);
            }
        }
        return "0";
    }
};

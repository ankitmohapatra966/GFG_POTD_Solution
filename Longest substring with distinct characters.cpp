class Solution 
{
  public:
    int longestUniqueSubstr(string &s) 
    {
        // code here
        unordered_set<char> a;
        int maxi = 0;
        int S = 0;
        for(int i=0;i<s.size();i++)
        {
            while(a.find(s[i])  != a.end())
            {
                a.erase(s[S]);
                S++;
            }
            a.insert(s[i]);
            maxi = max(maxi, i - S + 1);
        }
        return maxi;
    }
};

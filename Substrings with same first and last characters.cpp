class Solution {
  public:
     int countSubstring(string &s) 
    {
        unordered_map<char,int> mp;
        int sum = 0;
        
        for(auto &it : s)
        {
            mp[it]++;
        }
        
        for(auto itr = mp.begin(); itr != mp.end(); itr++)
        {
            int n = itr->second;
            sum += n*(n+1)/2;
        }
        return sum;
        
    }
};

class Solution {
  public:
     string largestSwap(string &s) 
    {
        vector<int> v(10,-1);
        for(int i = 0; i < s.size(); i++)
        {
            v[s[i]-'0'] = i;
        }
        
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 9; j >= 0; j--)
            {
                if(v[j] != -1 and v[j] > i and j > s[i]- '0')
                {
                    swap(s[i], s[v[j]]);
                    return s;
                }
            }
        }
        return s;
    }


};

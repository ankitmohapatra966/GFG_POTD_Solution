class Solution {
  public:
    vector<string> binstr(int n) 
    {
        vector<string> ans;
        ans.push_back(string(n,'0'));
        string num;
        for(int i=1;i< 1<<n;i++)
            {
                num = "";
                int x = i;
                while(x>0)
                    {
                        num = char(x%2 + '0') + num;
                        x /= 2;
                    }
                if (num.length() != n) num = string(n-num.length(),'0') + num;
                ans.push_back(num);
            }
        return ans;
    }
};

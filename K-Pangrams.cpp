class Solution {
  public:

    bool kPangram(string str, int k) {
        unordered_map<char,int> m;
        int extra=0;
        
        for(int i=0;i<str.size();i++)
        {
            if(!isalpha(str[i]))
            {
                continue;
            }
            if(m[str[i]]==1)
            {
                extra++;
            }
            else{
                m[str[i]]=1;
            }
        }
        
        int t=0;
        for(char ch='a';ch<='z';ch++)
        {
            if(extra==0)
            {
                break;
            }
            
            if(m[ch]==0 && extra>0)
            {
                m[ch]=1;
                extra--;
                t++;
            }
        }
        
        for(char cc='a';cc<='z';cc++)
        {
            if(m[cc]==0)
            {
                return false;
            }
        }
        if(t<=k)
        {
            return true;
        }
        return false;
        
    }
};

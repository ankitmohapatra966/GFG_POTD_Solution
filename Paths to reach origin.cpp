class Solution
{
public:
   int ways(int x, int y)
    {
        if(!x or !y) return 1;
        vector<int> up(y+1,0);
        up[0]=1;
        int mod = 1000000007;
        for(int i=0;i<=x;i++) {
            vector<int> newUp(y+1,0);
            for(int j=0;j<=y;j++) {
                if(j) newUp[j]+=newUp[j-1]+up[j];
                else newUp[j]=up[j];
                newUp[j]%=mod;
            }
            up=newUp;
        }
        return up[y];
    }
};

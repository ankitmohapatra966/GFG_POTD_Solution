class Solution {
  public:
     int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int idx=-1,n=gas.size();
        vector<int> tmp(n);
        for(int i=0;i<n;i++)
        {
            tmp[i]=gas[i]-cost[i];
        }
        vector<int> v(2*n);
        for(int i=0;i<2*n;i++)
        {
            v[i]=tmp[i%n];
        }
        int sum=0;
        for(int i=0;i<2*n;i++)
        {
            sum+=v[i];
            if(sum<0) idx=-1,sum=0;
            else 
            {
                if(idx==-1) idx=i;
            }
            if(idx!=-1 && (i-idx+1>=n)) return idx;
        }
        return -1;
    }
};

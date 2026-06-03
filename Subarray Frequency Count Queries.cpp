class Solution {
  public:
    vector<int> freqInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        
        unordered_map<int,vector<int>>mp;
        
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
        }
        
        int m=queries.size();
        
        vector<int>ans(m,0);
        
       for(int i=0;i<m;i++)
       {
           vector<int>a=mp[queries[i][2]];
           
           int l=queries[i][0],r=queries[i][1]; int cnt=0;
           
           for(int j=0;j<(int)a.size();j++)
           {
               if(a[j]>=l && a[j]<=r) cnt++;
           }
           
           ans[i]=cnt;
           
       }
       
       return ans;
    }
};


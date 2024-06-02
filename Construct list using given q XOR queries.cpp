class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
         int val=0;
        vector<int>ans;
        for(int i=q-1;i>=0;i--)
        {
            int x=queries[i][1];
            if(queries[i][0]==0) {x^=val; ans.push_back(x);}
            else val^=x;
        }
        ans.push_back(val);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

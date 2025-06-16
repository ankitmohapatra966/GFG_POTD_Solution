class Solution {
  public:
  int f(vector<int>&heights,vector<int>&cost,int mid){
      int ans=0;
      for(int i=0;i<heights.size();i++){
          ans+=(abs(heights[i]-mid)*cost[i]);
      }
      return ans;
  }
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int st=*min_element(heights.begin(),heights.end());
        int e=*max_element(heights.begin(),heights.end());
        int ans=INT_MAX;
        while(st<=e){
            int mid1=st+(e-st)/3;
            int mid2=e-(e-st)/3;
            int cost1=f(heights,cost,mid1);
            int cost2=f(heights,cost,mid2);
            
            ans=min(ans,min(cost1,cost2));
            if(cost1<cost2) e=mid2-1;
            else st=mid1+1;
        }
        
        return ans;
    }
};


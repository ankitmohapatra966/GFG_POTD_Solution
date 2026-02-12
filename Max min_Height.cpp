class Solution {
  public:
  
  bool check(int mid , int k , int w , vector<int>&arr){
      
      int n = arr.size();
      vector<int>vis(n+2 , 0);
      int curr = 0;
      for(int i=0;i<n ; i++){
          curr+=vis[i];
          int h = arr[i] + curr;
          if(h< mid){
              int j = mid - h;
              if(j<=k)k-=j;
              else return false;
              curr+=j;
              h = i+w;
              if(h<=n)vis[h]-=j;
          }
      }
      return true;
  }
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int st = *min_element(arr.begin() , arr.end()) , en = INT_MAX;
        int ans = st;
        while(st<=en){
            int mid = (st + en)/2;
            if(check(mid , k , w , arr)){
                ans = mid;
                st = mid+1;
            }else{
                en = mid-1;
            }
        }
    return ans;
        
    }
};

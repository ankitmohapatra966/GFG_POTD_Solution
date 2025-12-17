class Solution {
  public:
     vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
            int st=arr[0][0];
            int end=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(end<arr[i][0]){
                res.push_back({st,end});
                st=arr[i][0]; 
                end=arr[i][1];
                
            }
            else{
           end=max(end,arr[i][1]);
            }
        }
        res.push_back({st,end});
        return res;
    }
};

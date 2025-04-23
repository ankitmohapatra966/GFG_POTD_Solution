class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int n=arr.size();
        int i=0;
        while(i<n){ 
            if(i==n-1){
                ans.push_back(arr[i]);
                break;
            }
            
            if(arr[i]==arr[i+1]){
                i+=2;
            }
            
            else{
                ans.push_back(arr[i]);
                i++;
            }
            
        }
        if(ans.empty()){
            return {0,0};
        }
        
        return ans;
    }
};

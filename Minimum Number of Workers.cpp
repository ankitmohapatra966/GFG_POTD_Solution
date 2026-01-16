class Solution {
  public:
    int minMen(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count = 0;
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=-1)
            {
            int l = max(0,i-arr[i]);
            int r = min(n-1,i+arr[i]);
            v.push_back({l,r});
            }
        }
        
        if(v.size()==0)return -1;
        sort(v.begin(),v.end());
        
        int current = 0;
         int i = 0;
         
        while(current<n){
            int far = -1;
           
            
            while(i<v.size() && v[i].first<=current){
                far = max(far,v[i].second);
                i++;
            }
            
            if(far<current)return -1;
            count++;
            current = far+1;
        }
        
        return count;
    }
};

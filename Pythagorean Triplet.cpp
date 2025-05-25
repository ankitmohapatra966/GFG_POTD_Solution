class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(int target=0;target<arr.size();target++){
           int targetsum=arr[target]*arr[target];
            
            for(int i=0;i<arr.size();i++){
                if(i==target)continue;
                if(mp.find(targetsum-(arr[i]*arr[i]))!=mp.end()){
                    return true;
                }
                mp[arr[i]*arr[i]]++;
            }
            
        }
       return false; 
    }
};

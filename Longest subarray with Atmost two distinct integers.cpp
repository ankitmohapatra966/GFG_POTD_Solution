class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int n=arr.size();
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[arr[j]]++;
            while(mp.size()>2){
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            if(mp.size()<=2){
                 ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};

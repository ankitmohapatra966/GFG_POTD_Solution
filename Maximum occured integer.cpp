class Solution {
  public:
  
  int maxOccured(int n, int l[], int r[], int maxx) {
        int pref[maxx+2]={0};
        int ans=-1,mx=-1e9;
        for(int i=0;i<n;i++){
            pref[l[i]]++;
            pref[r[i]+1]--;
        }
        for(int i=1;i<=maxx;i++){
            pref[i]+=pref[i-1];
            if(pref[i]>mx){
                mx=pref[i];
                ans=i;
            }
        }
        return ans;
    }
};

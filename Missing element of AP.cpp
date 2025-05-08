class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        unordered_map<int, int> freq;
        int n = arr.size();
        for(int i=1;i<n;i++){
            freq[arr[i]-arr[i-1]]++;
        }
        
        int dcount  = -1;
        int d = 0;
        
        for(auto z:freq){
            if(z.second > dcount){
                dcount = z.second;
                d = z.first;
            }
        }
        
        if(freq.size() == 1)
            return arr[n-1]+d;
        
        for(int i=1;i<n;i++){
            int td = arr[i]-arr[i-1];
            if(td != d)
                return arr[i]-d;
        }
        return -1;
    }
};

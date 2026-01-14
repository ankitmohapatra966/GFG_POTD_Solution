class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int ans = 0;
        int p = 0 , th = 0;
        while(p<arr.size() && arr[p]!='P')p++;
            while(th<arr.size() && arr[th]!='T')th++;
        while(p<arr.size() && th<arr.size()){
            if(abs(p-th) <=k){ans++; p++ ; th++;}
            else{
                if(p<th)p++;
                else th++;
            }
            while(p<arr.size() && arr[p]!='P')p++;
            while(th<arr.size() && arr[th]!='T')th++;
        }
        return ans;
    }
};

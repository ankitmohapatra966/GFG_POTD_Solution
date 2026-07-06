class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        // Code here
        int i =0 , j = 0;
        int pa = 0 ,pb = 0 , preva = 0 ,prevb =0;
        int ans = 0;
        while(i< a.size() && j< b.size()){
            if(a[i] == b[j]){
                pa+=a[i++];
                pb+=b[j++];
                ans+= max(pa - preva , pb - prevb);
                preva = pa , prevb = pb;
            }else if(a[i] < b[j])pa+=a[i++];
            else pb+=b[j++];
        }
        while(i< a.size())pa+=a[i++];
        while(j< b.size())pb+=b[j++];
        ans+= max(pa- preva , pb - prevb);
        return ans;
    }
};

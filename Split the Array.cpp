class Solution {
  public:
    int countgroup(vector<int>& arr) {
       int aa=0;
       for(auto &b: arr){aa^=b;}
       int ans=pow(2,arr.size()-1);
       return aa==0?ans-1:0;
    }
};

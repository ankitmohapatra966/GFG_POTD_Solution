class Solution {
  public:
    vector<int> subsetXOR(int n) {
        // code here
        int x=n;
        for(int i=1;i<=n;i++){
            x^=i;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(i!=x)ans.push_back(i);
        }
        return ans;
    }
};

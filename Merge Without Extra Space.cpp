class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int a1 = a.size();
        int b1 = b.size();
        vector<int> v;
        v = a;
        for(int i=0;i<b1;i++){
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        a.assign(v.begin(), v.end()-b1);
        b.assign(v.begin()+a1, v.end());
    }
};

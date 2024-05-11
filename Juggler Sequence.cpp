class Solution {
  public:
    vector<int> jugglerSequence(int n) {
         vector<int> ans;
        while(n!=1){
            ans.push_back(n);
            if(n%2==0){
                n=pow(n,0.5);
            }else{
                n=pow(pow(n,3),0.5);
            }
        }
           ans.push_back(n);
        return ans;
    }
};

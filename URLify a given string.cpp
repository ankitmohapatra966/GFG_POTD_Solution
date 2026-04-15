class Solution {
  public:
    string URLify(string &s) {
        // code here
        string ans = "";
        
        for(auto x : s){
            if(x == ' '){
                ans += "%20";
            }else{
            ans += x;
                
            }
        }
        return ans;
    }
};

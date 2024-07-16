class Solution {
  public:

    string printString(string s, char ch, int count) {
        
        string ans="";
        for(auto i:s){
            if(count <= 0) ans+=i;
            if(i==ch) count--;
        }
        return ans;
 }
};

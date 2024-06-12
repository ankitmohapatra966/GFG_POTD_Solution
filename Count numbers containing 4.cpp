class Solution {
  public:
    int countNumberswith4(int n) {
        
         int count=0;
        for(int i=0;i<=n;i++){
            if(to_string(i).find("4")!=-1){
                count++;
            }
        }
        return count;
    }
};

class Solution {
  public:
    int lps(string str) {
        int n= str.length();
        int i=0, k=0, j=1, c=0;
        while(i<n && j<n){
            if(str[i]==str[j]){
                i++;
                j++;
                c++;
            }
            else{
                i=0;
                k++;
                j=k;
                c=0;
            }
        }
        
        return c;
    }
};

class Solution {
  public:
    string armstrongNumber(int n) {
        
        int z = n;
        
        int a = z%10;
        z = z/10;
        int b = z%10;
        z = z /10;
        int c = z%10;
        
        int ans = a*a*a + b*b*b + c*c*c;
        if(ans==n){
            return "true";
        }
        else
        return "false";
    }
};

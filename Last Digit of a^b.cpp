class Solution {
  public:
    
    int powerMod(int base, int exp) {
        int result = 1;
        
        while (exp > 0) {
            
            if (exp & 1)
                result = (result * base) % 10;
            
            base = (base * base) % 10;
            
            exp >>= 1;
        }
        
        return result;
    }
    
    int getLastDigit(string& a, string& b) {
        
        if (b == "0")
            return 1;
        
        int lastDigit = a.back() - '0';
        
        int exponent = 0;
        for (char ch : b) {
            exponent = (exponent * 10 + (ch - '0')) % 4;
        }
        
        if (exponent == 0)
            exponent = 4;
        
        return powerMod(lastDigit, exponent);
    }
};

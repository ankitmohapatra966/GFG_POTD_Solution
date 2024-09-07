class Solution {
  public:
   long long findNth(long long n) 
    {
        long long res = 0;
        int i = 0;
        while(n)
        {
            res += (n % 9) * (pow(10, i++));
            n/=9;
        }
        return res;
    }
};

class Solution {
  public:
    long long reversedBits(long long x) {
       
        long long ans = 0;
        for(int i=0; i<32; i++)
        {
            long long bit = (x>>i)&1;
            ans = ans | (bit<<(31-i));
        }
        return ans;
}
};

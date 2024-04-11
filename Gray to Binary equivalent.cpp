class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        int prev = 0;
        for (int i = 31; i >= 0; i--)
        {
            n ^= (1 << i) * prev;
            if (n & (1 << i))
                prev = 1;
            else
                prev = 0;
        }
        return n;
        
    }
};

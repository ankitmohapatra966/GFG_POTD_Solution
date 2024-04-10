class Solution{
    public:
    int findSingle(int n, int arr[]){
    int xor1 = 0;
    for(int i=0; i<n; i++) xor1 = xor1 ^ arr[i];
    return xor1;
    }
};

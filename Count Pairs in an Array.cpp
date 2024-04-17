class Solution{
    public:
    int countPairs(int arr[] , int n ) 
    {
        int prod[n];
        int ans = 0;
        int len = 0;
        for(int i = 0; i < n; i++){
            int curr = arr[i]*i;
            int ind = upper_bound(prod, prod + len, curr) - prod;
            ans += len - ind;
            if(ind == len){
                prod[len] = curr;
            }else{
                for(int j = len; j > ind; j--){
                    prod[j] = prod[j - 1];
                }
                prod[ind] = curr;
            }
            len++;
        }
        return ans;
    }
};

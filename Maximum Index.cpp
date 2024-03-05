class Solution{ 
    public: 
         
    // A[]: input array 
    // N: size of array  
    int maxIndexDiff(int a[], int n)  
    {  
           int i = 0; 
        int j = n-1; 
        int maximum = INT_MIN; 
        while(i < n){ 
            if(a[i] > a[j]){ 
                j--; 
            } 
            else{ 
                maximum = max(maximum , (j-i)); 
                j = n-1; 
                i++; 
            } 
        } 
        return maximum; 
    } 
};

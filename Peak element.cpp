// arr: input array 
// n: size of array 
class Solution 
{ 
    public: 
    int peakElement(int arr[], int n) 
    { 
       for(int i=1;i<n;i++){ 
           if(arr[i]<arr[i-1]) 
              return i-1; 
       } 
       return n-1; 
    } 
};

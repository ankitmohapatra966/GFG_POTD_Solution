class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        
        int n1=arr1.size();
        int n2=arr2.size();
        
        int sum1=0,sum2=0,sum=0;
        int i=0,j=0;
        
        while(i<n1&&j<n2){
            
            if(arr1[i]<arr2[j]){
                sum1=sum1+arr1[i];
                i++;
            }
            else if(arr1[i]>arr2[j]){
                sum2=sum2+arr2[j];
                j++;
            }
            else{
                sum=sum+arr1[i]+max(sum1,sum2);
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
        }
        if(arr1[i]==arr2[j]&&(i==n1&&j==n2)){
        return sum;}
   
         
            while(i<n1){
                sum1=sum1+arr1[i];
                i++;
            }
            while(j<n2){
                sum2=sum2+arr2[j];
                j++;
            }
        return sum+max(sum1,sum2);
    }
};

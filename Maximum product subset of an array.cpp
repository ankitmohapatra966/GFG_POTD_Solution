Maximum product subset of an array
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        long long int mod = 1000000007;
        int zero = 0;//zero flag
        int pos = 0; //positive flag
        int neg = 0; //negative number count
        int maxNeg = INT_MIN; //maximum negative count
        long long int posPro = 1; //keep track of product of negative numbers
        long long int negPro = 1; //keep track of product of positive numbers
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                zero = 1;
            }
            else if(arr[i] < 0){
                neg++;
                negPro = (negPro*arr[i])%mod;
                maxNeg = max(maxNeg, arr[i]);
            }
            else{
                pos = 1;
                posPro =(posPro*arr[i])%mod;
            }
        }
        
        if(pos == 0 && neg <= 1 && zero == 1) return 0;
        if(pos==1){
            if(neg%2 == 0){ //if negative numbers are in even then the product will be posiitve
                posPro = (posPro*negPro)%mod;
            }
            else if(neg%2!=0){//product will be negative
                posPro = (posPro*negPro/maxNeg)%mod ; // dividimg the maximum negative number to make the product positive
            }
            return posPro%mod;
        }
        if(pos==0 && neg > 1){
             if(neg%2!=0){
                negPro = (negPro/maxNeg)%mod ;
            }
            return negPro%mod;
        }
        return -1;
        
    }
};

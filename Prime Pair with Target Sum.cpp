class Solution {
  public:
    vector<int> getPrimes(int n) {
        vector<bool> isPrime(n+2 , true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2 ; i<n ;i++){
            if(isPrime[i]){
                for(int j = 2 ; i*j<n ;j++){
                    isPrime[i*j]=false;
                }
            }
        }
        for(int i = 2 ; i<n; i++){
            if(isPrime[i] && isPrime[n-i]){
                return {i , n-i};
            }
        }
        return {-1,-1};
    }
};

class Solution {
  public:
    long long max_sum(int a[], int n) {
        long long  sum=0,cs=0,N=n;
        for(long long i=0;i<N;i++){
           sum+=a[i];
           cs+=i*a[i];
        }
        long long res=cs;
        for(long long  j=1;j<N;j++){
            cs=cs-(sum-a[j-1])+a[j-1]*(N-1);
            if(res<cs)
                res=cs;
        }
        return res;
      
    }
};

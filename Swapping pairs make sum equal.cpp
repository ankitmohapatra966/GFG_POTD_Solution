class Solution {
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        set<int>st;
        int suma = 0;
        int sumb = 0;
        for(int i = 0 ; i < n ; i++ )
        {
            suma += a[i];
            st.insert(a[i]);
        }
        
        for(int i = 0 ; i < m ; i++ )
        {
            sumb += b[i];
        }
        
        
        if((sumb-suma)%2 != 0) return -1;

        
        for(int i = 0 ; i < m ; i++ )
        {
            if(st.find((suma-sumb)/2+b[i]) != st.end())
            {
                return 1; 
            }
        }
        return -1;
    }
};

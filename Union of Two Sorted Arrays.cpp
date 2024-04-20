class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set <int>  s ;
        for(int i = 0 ; i < n ; i++) {
            s.insert(arr1[i])  ;
        }
        
        for(int j = 0 ; j < m ; j++) {
            s.insert(arr2[j])  ;
        }
        vector <int> ans ;
        for( auto it : s) {
            ans.push_back(it) ;
        }
        
        return ans ;
    }
};

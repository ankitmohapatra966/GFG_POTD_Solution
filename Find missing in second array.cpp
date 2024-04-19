class Solution{


public:
vector<int> findMissing(int a[], int b[], int n, int m) 
{ 
     unordered_set<int> st;
     vector<int> ans;
     for(int i = 0;i<m;i++){
         st.insert(b[i]);
     }
     for(int i = 0;i<n;i++){
         if(st.find(a[i]) == st.end()) ans.push_back(a[i]);
     }
     return ans;
} 
};

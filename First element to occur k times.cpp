class Solution{ 
    public: 
    int firstElementKTime(int n, int k, int a[]) 
    { 
        std::unordered_map<int, int> map; 
        for(int i=0; i<n; i++){ 
            map[a[i]]++; 
            if(map[a[i]] == k) 
                return a[i]; 
        } 
        return -1; 
    } 
};

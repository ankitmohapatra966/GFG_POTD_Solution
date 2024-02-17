class Solution{ 
    public: 
    bool isMaxHeap(int arr[], int n) 
    { 
        queue<int> q; 
        q.push(arr[0]); 
         
        for(int i = 1; i < n; i++){ 
            int big = q.front(); 
            q.pop(); 
             
            if(arr[i] > big) 
                return 0; 
                 
            q.push(arr[i]); 
                 
            if(i + 1 < n){ 
                if(arr[i + 1] > big) 
                    return 0; 
                     
                q.push(arr[i + 1]); 
                ++i; 
            } 
        } 
         
        return 1; 
    } 
};
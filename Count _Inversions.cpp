class Solution {
    int inversions = 0;
    
  public:
    
    void merge(vector<int> &arr, int l, int mid, int r) {
        int p1 = l;
        int p2 = mid + 1;
        int size = r - l + 1;
        
        vector<int> sorted(size, 0);
        int p3 = 0;
        
        while(p1 <= mid && p2 <= r) {
            if(arr[p1] > arr[p2]) 
            {
                sorted[p3++] = arr[p2];
                
                int cnt = mid - p1 + 1;
                inversions += cnt;
                
                p2++;
            }
            else 
            {
                sorted[p3++] = arr[p1];
                p1++;
            }
        }
        
        while(p1 <= mid) {
            sorted[p3++] = arr[p1];
            p1++;
        }
        
        while(p2 <= r) {
            sorted[p3++] = arr[p2];
            p2++;
        }
        
        for(int i = 0; i < size; i++) {
            arr[l + i] = sorted[i];
        }
    }
    
    void merge_sort(vector<int> &arr, int l, int r) {
        if(l == r) return;
        
        int mid = (l + r) / 2;
        
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        
        merge(arr, l, mid, r);
    }
    
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        merge_sort(arr, 0, n - 1);
        return inversions;
        
    }
};

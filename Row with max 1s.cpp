class Solution {
public:
    int rowWithMax1s(const std::vector<std::vector<int>>& arr) {
        int n = arr.size();
        if (n == 0) return -1;
        int m = arr[0].size();
        
        // Check if the array is empty or has no columns
        if (m == 0) return -1;

        int max_row_index = -1;
        int j = m - 1;
        
        for (int i = 0; i < n; ++i) {
            while (j >= 0 && arr[i][j] == 1) {
                --j;
                max_row_index = i;
            }
        }
        
        return max_row_index;
    }
};

class Solution {
public:
    int kthMissing(vector<int>& arr, int k) {
        int missingCount = 0;
        int current = 1;     
        int index = 0;       
        
        while (true) {
            if (index >= arr.size() || current < arr[index]) {
                missingCount++; 
                if (missingCount == k) {
                    return current; 
                }
            } else {
                index++;
            }
            current++;
        }
    }
};

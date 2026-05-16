class Solution {
public:
    int findSmallest(std::vector<int>& arr) {
    
        std::sort(arr.begin(), arr.end());
        
        long long res = 1; 
        
        for (int i = 0; i < arr.size(); i++) {
      
            if (arr[i] > res) {
                break;
            }
            res += arr[i];
        }
        
        return res;
    }
};

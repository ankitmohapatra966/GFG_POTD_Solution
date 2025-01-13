class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int i = 0, j = n-1;
        
        int ans = 0;
        while(i < j){
            int base = (j-i);
            int hieght = min(arr[i], arr[j]);
            int volume = base*hieght;
            
            ans = max(ans, volume);
            
            if(arr[i] < arr[j]) i++;
            else j--;
        }
        
        return ans;
    }
};

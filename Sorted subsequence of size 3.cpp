class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int smallest = arr[0];
        int preSmallest = smallest;
        int secSmallest = 1e9;
        int n = arr.size();
        
        for(int i=1;i<n;i++){
            if(arr[i] > secSmallest) return {preSmallest, secSmallest, arr[i]};
            else if(arr[i] < smallest) {
                smallest = arr[i];
            }
            else if(arr[i] < secSmallest && arr[i] > preSmallest) {
                secSmallest = arr[i];
            }
            else if(arr[i] > smallest) {
                preSmallest = smallest;
                secSmallest = arr[i];
            }
        }
        
        return {};
    }
};

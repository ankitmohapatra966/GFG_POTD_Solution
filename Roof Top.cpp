class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int max_step = 0;
        int step = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > arr[i-1]){
                step++;
                max_step = max(max_step,step);
            }
            else{
                step = 0;
            }
        }
        return max_step;
    }
};

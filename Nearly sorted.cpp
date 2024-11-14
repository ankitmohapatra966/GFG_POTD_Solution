class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
       int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> minH;
        
        int j = 0;
        
        for(int i = 0; i < n; i++){
            minH.push(arr[i]);
            if(minH.size() > k){
                arr[j] = minH.top();
                minH.pop(); j++;
            }
        }
        
        while(!minH.empty()){
            arr[j] = minH.top(); minH.pop(); j++;
        }
    }
};

class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        vector<int>ans;
        priority_queue<int>pq(arr.begin(), arr.end());
        
        while(k){
            ans.push_back(pq.top());
            pq.pop();
            k--;
        }
        return ans;
    }
};

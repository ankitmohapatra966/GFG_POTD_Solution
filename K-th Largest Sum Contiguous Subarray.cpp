#define ll long long
class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        int n = (int)arr.size();
        priority_queue<ll> pq;
        for(int i = 0 ; i < n ; i++) {
            ll sum = 0;
            for(int j = i ; j < n ; j++) {
                sum += arr[j];
                pq.push(sum);
            }
        }
        for(int i = 1 ; i < k ; i++) pq.pop();
        return pq.top();
    }
};

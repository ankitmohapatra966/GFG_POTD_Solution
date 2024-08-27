class Solution{
   public:
    int findMaxDiff(vector<int> &arr) {
            int n = arr.size();
    vector<int> left_smaller(n, 0);
    vector<int> right_smaller(n, 0);
    
    stack<int> s;
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            left_smaller[i] = s.top();
        } else {
            left_smaller[i] = 0;
        }
        s.push(arr[i]);
    }
    while (!s.empty()) {
        s.pop();
    }
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            right_smaller[i] = s.top();
        } else {
            right_smaller[i] = 0;
        }
        s.push(arr[i]);
    }
    int max_diff = 0;
    for (int i = 0; i < n; ++i) {
        int diff = abs(left_smaller[i] - right_smaller[i]);
        max_diff = max(max_diff, diff);
    }
    
    return max_diff;
    }
};

class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
      
        int A = a.size(), B = b.size(), C = c.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        
        int p1 = 0, p2 = 0, p3 = 0;
        vector<int> ans;
        int mn = 1e9, mx = 0, mid = 1e9;
        int mnSum = 1e9, mnDif = 1e9;
        
        while(true) {
            
            vector<int> v = {a[p1], b[p2], c[p3]};
            sort(v.begin(), v.end(), greater<int>());
            
            mn = v[2], mx = v[0], mid = v[1];
            
            int sum = v[0] + v[1] + v[2];
            int dif = mx - mn;
            
            if(dif < mnDif) { // happier triplet found
                mnDif = dif;
                mnSum = sum; // renew mnSum as sum is secondary priority
                ans = v;
            }
            else if(mx - mn == mnDif) { // not happier but smaller sum triplet found
                if(sum < mnSum) {
                    mnSum = sum;
                    ans = v;
                }
            }
            
            if(p1 < A - 1 && a[p1] == mn) {
                p1++;
            }
            else if(p2 < B - 1 && b[p2] == mn) {
                p2++;
            }
            else if(p3 < C - 1 && c[p3] == mn) {
                p3++;
            }
            else if(p1 < A - 1 && a[p1] == mid) {
                p1++;
            }
            else if(p2 < B - 1 && b[p2] == mid) {
                p2++;
            }
            else if(p3 < C - 1 && c[p3] == mid) {
                p3++;
            }
            else if(p1 < A - 1 && a[p1] == mx) {
                p1++;
            }
            else if(p2 < B - 1 && b[p2] == mx) {
                p2++;
            }
            else if(p3 < C - 1 && c[p3] == mx) {
                p3++;
            }
            else break;
        }
        
        return ans;
        
    }
};

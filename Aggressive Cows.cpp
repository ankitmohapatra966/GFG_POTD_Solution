class Solution {
public:
    bool cowplace(vector<int>& stalls, int mindis, int k) {
        int count = 1; 
        int lastpos = stalls[0]; 
        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastpos >= mindis) {
                count++; 
                lastpos = stalls[i]; 
                if (count == k) {
                    return true; 
                }
            }
        }
        return false; 
    }

    int aggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end()); 
        int l = 1; 
        int r = stalls[stalls.size() - 1] - stalls[0]; 
        int res = 0; 

        while (l <= r) {
            int mid = l + (r - l) / 2; 
            if (cowplace(stalls, mid, k)) {
                res = mid; 
                l = mid + 1; 
            } else {
                r = mid - 1; 
            }
        }
        return res; 
    }
};

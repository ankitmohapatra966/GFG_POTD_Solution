class Solution {
  public:
    long subarrayXor(vector<int> &a, int k) {
        unordered_map<int, int> mpp = {{0, 1}};
        long cnt = 0; int x = 0;
        for (int i = 0; i < a.size(); i++) {
            x ^= a[i];
            cnt += mpp[x ^ k];
            mpp[x]++;
        }
        return cnt;
    }
};

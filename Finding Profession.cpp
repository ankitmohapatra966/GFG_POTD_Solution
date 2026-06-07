class Solution {
  public:
    string profession(int level, int pos) {
        int x = pos - 1;

        int cnt = 0;
        while (x) {
            cnt += (x & 1);
            x >>= 1;
        }

        return (cnt % 2 == 0) ? "Engineer" : "Doctor";
    }
};

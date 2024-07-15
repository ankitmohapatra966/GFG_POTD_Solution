class Solution {
  public:
    string smallestNumber(int s, int d) {
        if (9 * d < s) {
            return "-1";
        }
        if (s > 9) {
            return smallestNumber(s - 9, d - 1) + "9";
        }
        if (d == 1){
            return to_string(s);
        }
        if (s > 1) {
            return smallestNumber(1, d - 1) + to_string(s - 1);
        }
        
        return smallestNumber(1, d - 1) + "0";
    }
};

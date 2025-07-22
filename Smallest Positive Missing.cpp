class Solution {
public:
    int missingNumber(vector<int>& arr) {
        set<int> s;
        for (int num : arr) {
            if (num > 0) {
                s.insert(num);
            }
        }
        int pos = 1;
        while (true) {
            if (s.find(pos) == s.end()) {
                return pos;
            }
            pos++;
        }
    }
};

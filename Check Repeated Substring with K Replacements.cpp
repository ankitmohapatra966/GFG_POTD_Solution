class Solution {
public:
    bool kSubstr(string& s, int k) {
        int n = s.length();
        if (n % k != 0)
            return false;

        unordered_map<string, int> mp;

        for (int i = 0; i < n; i += k) {
            mp[s.substr(i, k)]++;
        }

        if (mp.size() == 1)
            return true;

        if (mp.size() == 2) {
            for (auto& x : mp) {
                if (x.second == 1)
                    return true;
            }
        }

        return false;
    }
};

class Solution {
  public:
    string multiplyStrings(string& s1, string& s2) {
        if (s1.empty() || s2.empty()) return "0";
        
        bool negative = false;
        if (s1[0] == '-') {
            negative = !negative;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            negative = !negative;
            s2 = s2.substr(1);
        }

        s1.erase(0, s1.find_first_not_of('0'));
        s2.erase(0, s2.find_first_not_of('0'));
        
        if (s1.empty() || s2.empty()) return "0";

        int n = s1.size(), m = s2.size();
        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + res[i + j + 1];
                
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }

        string result;
        int i = 0;
        while (i < res.size() && res[i] == 0) ++i;
        for (; i < res.size(); ++i) {
            result.push_back(res[i] + '0');
        }

        if (result.empty()) return "0";

        if (negative) {
            result = "-" + result;
        }
        return result;
    }
};

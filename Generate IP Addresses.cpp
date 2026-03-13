class Solution {
public:
    vector<string> generateIp(string& s) {
        vector<string> ans;
        int n = s.size();
        
        if (n < 4 || n > 12) return ans;
        
        for (int a = 1; a <= 3 && a < n; a++) {
            for (int b = 1; b <= 3 && a + b < n; b++) {
                for (int c = 1; c <= 3 && a + b + c < n; c++) {
                    int d = n - a - b - c;
                    
                    if (d > 0 && d <= 3) {
                        if (isValid(s, 0, a) && 
                            isValid(s, a, b) && 
                            isValid(s, a + b, c) && 
                            isValid(s, a + b + c, d)) {
                            
                            ans.push_back(
                                s.substr(0, a) + "." +
                                s.substr(a, b) + "." +
                                s.substr(a + b, c) + "." +
                                s.substr(a + b + c, d)
                            );
                        }
                    }
                }
            }
        }
        
        return ans;
    }
    
private:
    bool isValid(const string& s, int start, int len) {
        if (len > 1 && s[start] == '0') return 0;
        
        int val = 0;
        for (int i = start; i < start + len; i++) {
            val = val * 10 + (s[i] - '0');
        }
        
        return val <= 255;
    }
};

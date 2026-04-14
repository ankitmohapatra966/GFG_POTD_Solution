class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string r = "";
        
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ')
                continue;
            r += s[i];
        }
        return r; 
    }
};

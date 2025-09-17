class Solution {
  public:
    string decodedString(string &s) {
        stack<int> countStack;
        stack<string> stringStack;
        string current = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0'); 
            } 
            else if (c == '[') {
                countStack.push(num);
                stringStack.push(current);
                num = 0;
                current = "";
            } 
            else if (c == ']') {
                int repeat = countStack.top(); countStack.pop();
                string prev = stringStack.top(); stringStack.pop();

                string temp = "";
                for (int i = 0; i < repeat; i++) {
                    temp += current;
                }
                current = prev + temp;
            } 
            else {
                current += c; 
            }
        }
        return current;
    }
};

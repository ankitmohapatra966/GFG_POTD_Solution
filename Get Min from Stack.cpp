class Solution {
    vector<int> s, p;
    int i = -1, j = -1;
  public:
    Solution() {
        // code here
        int MAX_Q = 1e5 + 5;
        s.resize(MAX_Q, 0);
        p.resize(MAX_Q, 0);
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        s[++i] = x;
        if(j == -1 || s[j] >= x) {
            p[i] = j;
            j = i;
        }
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(i == -1) return;
        if(j == i) j = p[i];
        i--;
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(i == -1) return -1;
        return s[i];
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(j == -1) return -1;
        return s[j];
    }
};

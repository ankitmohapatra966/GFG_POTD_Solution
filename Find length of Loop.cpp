class Solution {
  public:
    int countNodesinLoop(Node *head) {
        int v = 1; unordered_map<Node*,int> val;
        while ( head ){
            if ( val[head] != 0 ) return v - val[head];
            val[head] = v++;
            head = head->next;
        } return 0;
    }
};

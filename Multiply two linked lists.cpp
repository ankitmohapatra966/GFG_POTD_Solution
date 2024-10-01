class solution {
  public:
    long long mod = 1e9+7;
    long long getnum(Node* root){
        long long num = 0;
        while(root){
        num *= 10; num %= mod;
        num += root->data; num %= mod;
        root = root->next;
       }
        return num%mod;
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        return (getnum(first)*getnum(second))%mod;
    }
};

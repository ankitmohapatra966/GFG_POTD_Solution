class Solution {
    string solve(Node* root){
        if (!root) return "N|";
        string ans = "";
        ans += to_string(root->data) + "|";
        ans += solve(root->left);
        ans += solve(root->right);
        return ans;
    }
  public:
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        string pre1 = solve(root1);
        string pre2 = solve(root2);
        if (pre1.find(pre2)!=string::npos) return true;
        return false;
    }
};

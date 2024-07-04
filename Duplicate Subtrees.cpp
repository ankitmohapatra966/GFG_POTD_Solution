class Solution {
  private:
    unordered_map<string,int> mp;
    vector<Node*> res;
    string DFS(Node*root){
        if(!root) return "N";
        
        string str = DFS(root->left)+""+DFS(root->right)+to_string(root->data);
        mp[str]++;
        if(mp[str] == 2) res.push_back(root);
        
        return str;
    }
  public:
    vector<Node*> printAllDups(Node* root) {
        DFS(root);
        return res;
    }
};

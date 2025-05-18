class Solution {
  public:
    vector<int> findSpiral(Node* root) {
       vector<int> ans;
        queue<Node*> qu;
        qu.push(root);
        bool lvl = 1;
        
        while(!qu.empty()) {
            int len = qu.size();
            for(int i = 0; i < len; i++) {
                auto curr = qu.front();
                qu.pop();
                ans.push_back(curr -> data);
                
                if(curr -> left) qu.push(curr -> left);
                if(curr -> right) qu.push(curr -> right);
            }
            if(lvl) reverse(ans.end() - len, ans.end());
            lvl ^= 1;
        }
        return ans;
    }
};

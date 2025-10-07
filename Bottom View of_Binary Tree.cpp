class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        queue<pair<Node*, int>> q;
        q.push({root,0});
        map<int,Node*> mp;
        while(!q.empty()) {
            Node* temp = q.front().first;
            int lev = q.front().second;
            q.pop();
            if (temp) {
                mp[lev] =temp;
                if (temp->left) q.push({temp->left,lev-1});
                if (temp->right) q.push({temp->right,lev+1});
                
            }
            else {
                q.push({NULL,0});
                if (!q.front().first) break;
                
            }
        }
        vector<int> v;
        
        for (auto i: mp) v.push_back(i.second->data);
        return v;
        
        
        
    }
};

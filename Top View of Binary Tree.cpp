class Solution {
  public:
    vector<int> topView(Node *root) {
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        vector<int> v;
        
        q.push({root,0});
        
        while(q.size()){
            auto t=q.front();
            q.pop();
            
            if(!mp.count(t.second)) mp[t.second]=t.first->data;
            if(t.first->left) q.push({t.first->left,t.second-1});
            if(t.first->right) q.push({t.first->right,t.second+1});
        }
        
        for(auto it:mp) v.push_back(it.second);
        return v;
    }
};

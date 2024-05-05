class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        vector<int> res;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Node * node = q.front().first;
            int line = q.front().second;
            q.pop();
            
            mp[line] += node->data;
            
            if(node->left)
                q.push({node->left,line-1});
            if(node->right)
                q.push({node->right,line+1});
        }
        for(auto i : mp){
            res.push_back(i.second);
        }
        return res;
    }
};

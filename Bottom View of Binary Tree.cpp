class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int>ans;
        if(root==NULL) return  ans;
        map<int,int>m;
        queue<pair<int,Node*>>q;
        q.push({0,root});
        while(!q.empty()){
            pair<int,Node*>temp=q.front();
            q.pop();
            int x=temp.first;
            Node* node=temp.second;
            m[x]=node->data;
            if(node->left) q.push({x-1,node->left});
            if(node->right) q.push({x+1,node->right});
        }
        for(auto i:m) ans.push_back(i.second);
        return ans;

    }
};

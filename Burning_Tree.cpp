class Solution {
  public:
    virtual void setParent(Node *root, unordered_map<Node*, Node*> &par, Node *&targetNode, int target){
      queue<Node*> q;
      q.push(root);
      par[root]=NULL;
      
      while(!q.empty()){
        Node *r=q.front(); q.pop();
        if(r->data == target) { targetNode=r; }
        if(r->left){
          par[r->left]=r;
          q.push(r->left);
        }        
        if(r->right){
          par[r->right]=r;
          q.push(r->right);
        }
      }
      
      return;
    }
    virtual int minTime(Node* root, int target) {
      Node *targetNode=NULL;
      unordered_map<Node*, Node*> par;
      setParent(root, par, targetNode, target);
      
      queue<Node*> q;
      unordered_map<Node*, bool> visited;
      
      q.push(targetNode);
      visited[targetNode]=true;
      
      int c=-1;
      
      while(!q.empty()){
        int n=q.size();
        while(n--){
          Node *r=q.front(); q.pop();
          if(r->left && !visited[r->left]){
            visited[r->left]=true;
            q.push(r->left);
          }          
          if(r->right && !visited[r->right]){
            visited[r->right]=true;
            q.push(r->right);
          }          
          if(par[r] && !visited[par[r]]){
            visited[par[r]]=true;
            q.push(par[r]);
          }
          
        }
        c++;
      }
      
      return c;
    }
};

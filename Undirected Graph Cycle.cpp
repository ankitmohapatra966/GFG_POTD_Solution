class Solution {
  public:  
  int pr[100005];  
  int check[100005]; 
  int check1=0;
  vector<int> ke[100005];
  void DFS(int u) { 
      if(check1) return;
      check[u]=1;
      for(int v:ke[u]) { 
          if(check[v]==0) {   
              pr[v]=u;
              DFS(v);
          } 
          else if(check[v]==1 && pr[u]!=v) { 
              check1=1; 
              return;
          }
      }
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        check1=0; 
        for(int i=0;i<V;i++) { 
            check[i]=0; 
            pr[i]=0;
        } 
        for(int i=0;i<edges.size();i++){
            ke[edges[i][0]].push_back(edges[i][1]); 
            ke[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<V;i++) if(check[i]==0) DFS(i); 
        if(check1) return true;else return false;
    }
};


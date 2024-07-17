class Solution {
  public:
    
    Node *createTree(vector<int> parent) {
        unordered_map<int,Node*> nodes;
        for(int i =0;i< parent.size();i++){
            nodes[i] =new Node(i);
        }
        int rootval =-1;
        for(int i =0;i< parent.size();i++){
            int Par =parent[i];
            int Child =i;
            if(Par == -1){
                rootval =i;
                continue;
            }
            if(nodes[Par]->left == nullptr){
                nodes[Par]->left =nodes[Child];
            }else{
                nodes[Par]->right =nodes[Child];
            }
        }
        return nodes[rootval];
    }
};

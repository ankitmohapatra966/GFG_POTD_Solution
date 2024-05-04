class Solution
{
    public:
    int find(int in[],int i,int j,int data){
        for(int k=i;k<=j;k++){
            if(in[k] == data){
                return k;
            }
        }
        return -1;
    }
    Node*solve(int in[],int post[],int i1,int j1,int j2,int n){
        if(i1 > j1){
            return nullptr;
        }
        int d = post[j2];
        Node * root = new Node(d);
        int ind = find(in,i1,j1,d);
        root->right = solve(in,post,ind+1,j1,j2-1,n);
        root->left = solve(in,post,i1,ind-1,j2 - (j1-ind+1),n);
        return root;
    }
    Node *buildTree(int in[], int post[], int n) {
        return solve(in,post,0,n-1,n-1,n);
    }
};


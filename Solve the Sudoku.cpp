class Solution {
  public:
    int solve(vector<vector<int>>&mat){
        int n = mat.size();
        int ct = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    for(int k=1;k<=9;k++){
                        if(valid(k,i,j,mat)){
                            mat[i][j] = k;
                            int t = solve(mat);
                            if(t > 0)return 1;
                            mat[i][j] = 0;
                        }
                    }
                    return -1;
                }
                else{
                    ct++;
                }
            }
        }
        return (ct == n*n)?1:-1;
    }
    bool valid(int num,int i,int j,vector<vector<int>>&mat){
        int n = mat.size();
        for(int x=0;x<n;x++){
            if(mat[x][j] == num){
                return false;
            }
        }
        for(int y=0;y<n;y++){
            if(mat[i][y] == num){
                return false;
            }
        }
        i/=3;j/=3;
        i*=3;j*=3;
        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                if(mat[x][y] == num){
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        int n = mat.size();
        solve(mat);
    }
};

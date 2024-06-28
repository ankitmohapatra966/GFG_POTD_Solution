class Solution {
  public:

    string pattern(vector<vector<int>> &mat) {
        
        int rows = mat.size();
        int col = mat[0].size();
        for(int i = 0; i < rows; i++){
            int flag = 0;
            for(int j = 0; j < col/2; j++){
                if(mat[i][j] != mat[i][col - j - 1]){ 
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return to_string(i) + " R";
        }
        
        for(int i = 0; i < col; i++){
            int flag = 0;
            for(int j = 0; j < rows/2; j++){
                if(mat[j][i] != mat[rows - j - 1][i]){ 
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return to_string(i) + " C";
        }
        return "-1";
    }
};

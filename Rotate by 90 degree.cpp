void rotate(vector<vector<int> >& mat) {
      for(int i=0;i<mat.size();i++)
        for(int j=0;j<i;j++)
            swap(mat[i][j],mat[j][i]);
    
    for(auto &i :mat) reverse(i.begin(),i.end());
}

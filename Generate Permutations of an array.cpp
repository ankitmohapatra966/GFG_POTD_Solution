class Solution {
  public:
    virtual void fun(int i, int &r, vector<int> &arr, vector<vector<int>> &ans){
      if(i==r){ ans.push_back(arr); return; }
      
      for(int j=i; j<=r; j++){
        swap(arr[i], arr[j]);
        fun(i+1, r, arr, ans);
        swap(arr[i], arr[j]);
      }
      return;
    }
    
    virtual vector<vector<int>> permuteDist(vector<int>& arr){
      vector<vector<int>> ans;
      int r=arr.size()-1;
      fun(0, r, arr, ans);
      return ans;
    }
};

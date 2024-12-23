class Solution {
  public:
    bool binarySearch(vector<int> mat, int x){
        int start=0, end=mat.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mat[mid]==x)
            {
                return true;
            }
            else if(mat[mid]<x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return false;
    }
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        for(int i =0;i<n;i++){
            if(binarySearch(mat[i],x)){
                return true;
            }
        }
        return false;
    }
};

class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        vector<int> sol;
        
        int idx1 = 0;
        int idx2 = 0;
        int n1 = arr1.size(), n2 = arr2.size();
        
        while(idx1 < n1 && idx2 < n2){
            if(arr1[idx1] <= arr2[idx2])
                sol.push_back(arr1[idx1++]);
            else
                sol.push_back(arr2[idx2++]);
        }
        
        while(idx1 < n1) sol.push_back(arr1[idx1++]);
        while(idx2 < n2) sol.push_back(arr2[idx2++]);
        
        int size = n1 + n2;
        
        if(size % 2 == 0)
            return sol[size/2] + sol[size/2 - 1];
        
        return sol[size/2];
        
    }
};

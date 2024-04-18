//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        vector<int>ans;
        for(int i=0;i<n+2;i++)
        {
            arr[arr[i]%(n+1)-1]+=n+1;
            if(arr[arr[i]%(n+1)-1]/(n+1)==2)
            {
              ans.push_back(arr[i]%(n+1));  
            }
        }
        return ans;
    }
};

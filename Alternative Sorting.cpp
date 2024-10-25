class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
      sort(arr.begin(),arr.end());
        int n=arr.size();int start=0;
        int end=n-1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(arr[end]);
                end--;
            }
            else{
                ans.push_back(arr[start]);
                start++;
            }
        }
        return ans;
    }
};


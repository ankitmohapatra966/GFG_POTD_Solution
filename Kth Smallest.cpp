class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        int maxi=*max_element(arr.begin(),arr.end());
        vector<int>freq(maxi+1,0);
        for(int i=0;i<arr.size();i++)
        freq[arr[i]]++;
        for(int i=0;i<=maxi;i++){
            if(freq[i]!=0){
                k--;
                if(k==0)
                return i;
            }
        }
        return -1;
    }
};

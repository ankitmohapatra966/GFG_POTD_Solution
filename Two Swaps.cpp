class Solution {
  public:
     bool isSorted(const vector<int>&arr){
        int n=arr.size();
        bool f=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                f=false;
                break;
            }
        }
        return f;
    }
    bool checkSorted(vector<int> &arr) {
        // code here.
        int l=0,r=arr.size()-1,c=0;
        if(isSorted(arr)) return true;
        vector<int>v=arr;
        while(l<r){
            if(v[l]>v[r]){
                swap(v[l],v[r]);
                c++;
                r--;
                if(c>2) return false;
            }
            l++;
        }
        return isSorted(v);
    }
};

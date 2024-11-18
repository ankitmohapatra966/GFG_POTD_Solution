class Solution {
  public:
    void reversal(vector<int>& arr,int start,int end){
        while(start <= end){
            swap(arr[start++],arr[end--]);
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        d = d%arr.size();
        reversal(arr,0,d-1);
        reversal(arr,d,arr.size()-1);
        reversal(arr,0,arr.size()-1);
    }
};

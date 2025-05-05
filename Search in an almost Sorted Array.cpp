class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int l = 0;
        int h = n-1;
        while (l<=h){
            int mid = l + (h - l) / 2;
            if (arr[mid] == target) return mid;
            if (mid > l && arr[mid - 1] == target) return mid - 1;
            if (mid < h && arr[mid + 1] == target) return mid + 1;
            if (arr[mid] < target ){
                l = mid+2;
            }
            else {h = mid - 2;}
        }
        return -1;
    }


};

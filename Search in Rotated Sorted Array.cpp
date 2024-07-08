class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int s = 0, e = arr.size() - 1;
        while(s <= e)
        {
            if(arr[s] == key)
            {
                return s;
            }
            else{
                s++;
            }
            if(arr[e] == key)
            {
                return e;
            }
            else{
                e--;
            }
        }
        return -1;
    }
};

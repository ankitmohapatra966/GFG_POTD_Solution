class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
     int i = 0,j=0,ans = 0;
       multiset <int> set;        
int l =0,h=0;
      while(i< arr.size()){
     set.insert(arr[i]);
     
        while(*set.rbegin() - *set.begin()  > x){
            
            set.erase(set.find(arr[j]));
            j++;
        }
      if(ans < i-j+1){
        l = j;
        h = i;
        ans = i-j+1;
      }
      i++;
      }
      vector<int> s;
      for(int i = l ; i<=h;i++){
s.push_back(arr[i]);
}
        return s;
    }
};

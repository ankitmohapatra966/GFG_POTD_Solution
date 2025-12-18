class Solution {
  public:
  static bool cmp(int &a,int &b)
  {
    
      if(a%2==1 && b%2==0)
      {
        return true;
      }
      else if(a%2==0 && b%2==1)
      {
        return false;
      }
      else if(a%2==1 && b%2==1)
      {
          return a>b;
      }
      else if(a%2==0 && b%2==0)
      {
          return a<b;
      }
  }
    void sortIt(vector<int>& arr) {

        sort(arr.begin(),arr.end(),cmp);
    }
};

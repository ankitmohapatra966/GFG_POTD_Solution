class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n&1) arr.push_back(0);
        sort(arr.rbegin(),arr.rend());
        string a;
        int i = 0;
        int car = 0;
        while(i<n){
            int x = arr[i++];
            int y = arr[i++];
            a.push_back((x+y+car)%10+'0');
            car = (x+y+car)/10;
        }
        while(a.back()=='0') a.pop_back();
        if(car) a.push_back('1');
        return string(a.rbegin(),a.rend());
    }
};

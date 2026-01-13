class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int n=arr.size();
        int fives=0,tens=0;
        for(int ticket:arr){
            if(ticket==5) fives++;
            else if(ticket==10) {
                tens++;
                fives--;
                if(fives<0) return false;
            }
            else {
                if(tens==0) fives-=3;
                else tens--, fives--;
                if(fives<0) return false;
            }
        }
        return true;
    }
};

class Solution {
  public:
    int minDifference(vector<string> &arr) {
        // code here
        int n=arr.size();
        vector<int> seconds(n);
        for(int i=0;i<n;i++) {
            int hours=(arr[i][0]-'0')*10+(arr[i][1]-'0');
            int minutes=(arr[i][3]-'0')*10+(arr[i][4]-'0');
            int secs=(arr[i][6]-'0')*10+(arr[i][7]-'0');
            seconds[i]=(hours*3600)+(minutes*60)+secs;
        }
        sort(seconds.begin(),seconds.end());
        int minDiff=INT_MAX;
        for(int i=0;i<n-1;i++) {
            minDiff=min(minDiff,seconds[i+1]-seconds[i]);
        }
        return min(minDiff,86400-seconds[n-1]+seconds[0]);
    }
};

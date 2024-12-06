class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int cnt=0;
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        for(int i=0;i<citations.size();i++)
        {
            if(citations[i]>i)
             cnt++;
        }
        return cnt;
    }
};

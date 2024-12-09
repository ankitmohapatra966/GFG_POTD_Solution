class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        
        for(int i=1;i<n;i++)
        {
            vector<int> temp=ans.back();
            if(temp[1]>=intervals[i][0])
            {
                ans.back().pop_back();
                ans.back().push_back(max(temp[1],intervals[i][1]));
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        
        return ans;
    }
};

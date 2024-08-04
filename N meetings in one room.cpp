class Solution {
  public:
  static bool compare(pair<int,int>&a,pair<int,int>&b){
      if(a.second==b.second)
      return a.first<b.first;
      return a.second<b.second;
  }
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
        vec.push_back({start[i],end[i]});
        sort(vec.begin(),vec.end(),compare); 
      int ans=1;
      int prev=0;
       for(int i=1;i<n;i++){
           
           if(vec[i].first>vec[prev].second){
               prev=i;
               ans++;
           }
       }
       return ans;
    }
};

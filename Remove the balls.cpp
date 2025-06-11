class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        stack<pair<int,int>>s;
        for(int i = 0;i<color.size();i++){
            if(!s.empty() && s.top().first==color[i] && s.top().second==radius[i]){
                s.pop();
            }
            else s.push({color[i],radius[i]});
        }
        return s.size();
    }
};


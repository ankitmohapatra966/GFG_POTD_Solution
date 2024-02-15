class Solution {
public:
 int isPossible(vector<vector<int>>paths){  
     for(auto &x : paths)  if(accumulate(x.begin(), x.end(), 0) & 1) return 0;
        return 1;
    }
};
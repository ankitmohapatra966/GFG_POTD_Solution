class Solution{
public:
    vector<vector<int>>dir = {{0,-1}, {-1,-1},{1,-1}};
    bool check(vector<int>& conf, int i, int j, int &n){
        for(int d = 0; d < 3; d++){
            int dx = i, dy = j;
            while(dx < n && dx >= 0 && dy >= 0){
                dx += dir[d][0], dy += dir[d][1];
                for(int k = 0; k < conf.size(); k++){
                    if(dx + 1 == conf[k] && dy == k){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    void board_config(vector<vector<int>>& ans, vector<int>& conf, int &n, int j){
        if(j == n){
            ans.push_back(conf);
            return;
        }
        else{
            for(int i = 0; i < n; i++){
                if(check(conf, i, j, n)){
                    conf.push_back(i+1);
                    board_config(ans, conf, n, j+1);
                    conf.pop_back();
                }
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>ans;
        vector<int>conf;
        board_config(ans, conf, n, 0);
        return ans;
    }
};

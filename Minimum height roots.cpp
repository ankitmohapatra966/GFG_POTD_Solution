class Solution {
public:
    vector<int> minHeightRoot(int V, vector<vector<int>>& edges) {
        int count[100001] = {0};
        vector<vector<int>> v(V);
        for(int i = 0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
            count[a]++;
            count[b]++;
        }
        //trim from outside;
        queue<int> q;
        for(int i = 0;i<V;i++){
            if(count[i] == 1){
                q.push(i);
            }
        }
        int rem = V;
        while(rem > 2){
            int b = q.size();
            int c = q.size();
            while(b--){
                int a = q.front();
                q.pop();
                vector<int> w = v[a];
                for(int i = 0;i<w.size();i++){
                    count[w[i]]--;
                    if(count[w[i]] == 1){
                        q.push(w[i]);
                    }
                }
            }
            rem -= c;
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};

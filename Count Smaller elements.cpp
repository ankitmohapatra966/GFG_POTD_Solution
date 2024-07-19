class Solution {
  public:
    vector<int> seg;
    
    void update(int i, int j, int l, int h){
        if(j < l || j > h)
            return;
        seg[i]++;
        // cout << l <<" "<<h<<" "<<seg[i]<<endl;
        if(l == h)
            return;
        int mid = (l+h)>>1;
        update(2*i + 1, j, l, mid);
        update(2*i + 2, j, mid+1, h);
    }
    int query(int i, int j, int l, int h){
        if(h < j)
            return 0;
        if(l >= j)
            return seg[i];
        int mid = (l+h)>>1;
        return query(2*i+1, j, l, mid) +
        query(2*i+2, j, mid+1, h);
    }
    vector<int> constructLowerArray(vector<int> &arr) {
    
        int n = arr.size();
        seg.resize(4*n);
        vector<int> ans(n);
        vector<vector<int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({arr[i], i});
        }
        sort(temp.begin(), temp.end());
        
        for(int i=0;i<n;i++){
            ans[temp[i][1]] = query(0, temp[i][1], 0, n-1);
            update(0,temp[i][1],0,n-1);
        }
        return ans;
    }
};

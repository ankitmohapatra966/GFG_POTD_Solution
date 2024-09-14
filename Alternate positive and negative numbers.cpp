class Solution {
  public:    
    void rearrange(vector<int> &arr) {
        vector<int>pos,neg;
        for(auto x:arr)
        {
            if(x>=0)
            pos.push_back(x);
            else
            neg.push_back(x);
        }
        int i=0,j=0,k=0;
        while(i<pos.size() && j<neg.size())
        {
            if(k%2==0)
            arr[k++]=pos[i++];
            else
            arr[k++]=neg[j++];
        }
        while(i<pos.size())
        arr[k++]=pos[i++];
        while(j<neg.size())
        arr[k++]=neg[j++];
    }
    
};

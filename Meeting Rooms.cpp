class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {

        vector<pair<int,int>> data ;
        for(int i = 0 ; i < arr.size() ; i++ )
            data.push_back({arr[i][0],arr[i][1]}) ;
        
        sort(data.begin(),data.end()) ;
        for(int i = 1 ; i <data.size() ; i++ )
            if(data[i].first<data[i-1].second)
               return false ;
        
        return true ;
    }
};

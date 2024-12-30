class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> v;
        for(int i:a){
            if(find(v.begin(),v.end(),i)==v.end()){
                v.push_back(i);
            }
        }
        for(int i:b){
            if(find(v.begin(),v.end(),i)==v.end()){
                v.push_back(i);
            }
        }
        return v.size();
    }
};

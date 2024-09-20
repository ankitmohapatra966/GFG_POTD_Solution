class Solution {
  public:
    int countBuildings(vector<int> &height) {
        
        int n = height.size();
        int cnt = 1;
        int lastBuilding = height[0];
        for(int i=1; i<n; i++){
            if(height[i] > lastBuilding){
                lastBuilding = height[i];
                cnt++;
            }
        }
        
        return cnt;
        
    }
};

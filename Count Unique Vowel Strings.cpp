class Solution {
  public:
    int fact(int n) {
        if(n == 1 ) return 1;
        return n * fact(n-1);
    }
    
    int vowelCount(string& s) {
        unordered_map<char, int>map;
        
        for(auto i : s){
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
                map[i]++;
            }
        }
        if(map.size()==0) return 0;
        int res = fact(map.size());
        
        for(auto i : map){
            res *= i.second;
        }
        return res;
    }
};

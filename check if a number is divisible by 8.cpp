class Solution{ 
    public: 
    int DivisibleByEight(string s){  
          int n=s.length(); 
        int l=stoi(s.substr(max(n-3,0))); 
        return l%8==0?1:-1; 
    } 
};

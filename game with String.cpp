class Solution {
  public:
    int minValue(string &s, int k) {
        int ans = 0;
        vector <int> freq(26, 0);
        for(char c : s) freq[c - 'a']++;
        
        multiset <int> ms;
        for(int i : freq) if(i != 0) ms.insert(i);
        
        while(k > 0){
            int last = *ms.rbegin();
            ms.erase(ms.find(last));
            last--, k--;
            if(last != 0) ms.insert(last); 
        }
        
        for(int i : ms) ans += (i*i);
        return ans;
    }
};

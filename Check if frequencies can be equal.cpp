class Solution{
public: 
 bool sameFreq(string s)
 {
     map<char, int> freq;
     for(auto c:s) freq[c]++;
     
     int mini = INT_MAX , maxi = INT_MIN;
     for(auto it:freq) 
     {
         mini = min(it.second , mini);
         maxi = max(it.second, maxi);
     }
     
     if(mini == maxi) return true;
     int cnt = 0;
     for(auto it:freq) if(it.second == maxi) cnt++;
     if(abs(mini-maxi) == 1 && cnt == 1) return true;

     return false;
 }
};

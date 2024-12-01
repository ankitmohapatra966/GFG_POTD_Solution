class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        int arr[26]={0};
        for(auto x: s) arr[x-'a']++;
        for(auto x: s) if(arr[x-'a']==1) return x;
        return '$'; 
        
    }
};

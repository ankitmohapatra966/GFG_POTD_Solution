class Solution {
    bool isVowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
  public:
    int countBalanced(vector<string>& arr) {
        int n = arr.size(), diff = 0, res = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            string curr = arr[i];
            for(int j=0;j<curr.size();j++){
                if(isVowel(curr[j])){
                    diff++;
                }
                else{
                    diff--;
                }
            }
            res += mp[diff];
            mp[diff]++;
        }
        return res;
    }
};

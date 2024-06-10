class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        
        char charr[]={'!', '#', '$','%', '&', '*', '?', '@', '^'};
        vector<char>nut;
        vector<char>bolt;
        for(int i=0;i<9;i++){
            for(int j=0;j<n;j++){
                if(charr[i]==nuts[j]){
                    nut.push_back(nuts[j]);
                }
                if(charr[i]==bolts[j])
                bolt.push_back(bolts[j]);
            }
        }
        for(int i=0;i<n;i++){
            nuts[i]=nut[i];
            bolts[i]=bolt[i];
        }
    }
};

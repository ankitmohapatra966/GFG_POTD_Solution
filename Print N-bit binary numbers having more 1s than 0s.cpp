class Solution{
public:
     bool isValid(string output){
        int i = 0;
        int ones = 0 , zeros = 0;
        while(i < output.size()){
            if(output[i] == '1'){
                ones++;}
            else{
                zeros++;}
            if(ones < zeros){
                return false;}
            i++;
        }
        return true;
    }
    void solve(int n , string output , vector<string> &ans){
        if(n == 0){
            if(isValid(output)){
                ans.push_back(output);
            }
            return;
        }
        solve(n-1,output+"1",ans);
        solve(n-1,output+"0",ans);
    }
 
vector<string> NBitBinary(int n)
{
    vector<string> ans;
    string output = "";
    solve(n,output,ans);
    return ans;
}
};

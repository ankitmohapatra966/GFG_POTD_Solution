class Solution{
public:
 static bool mycomp(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1>t2;
 }
string printLargest(int k, vector<string> &nums) {
        sort(nums.begin(),nums.end(),mycomp);
        if(nums[0]=="0"){
        return "0";
        } 
        string ans="";
        for(auto str:nums){
            ans+=str;
        }
        return ans;
    }
};

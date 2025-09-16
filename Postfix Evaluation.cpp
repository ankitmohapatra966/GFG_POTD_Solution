class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        vector<double>s;
        int n=arr.size();
        for(auto &i:arr){
            if(i!="+"&&i!="-"&&i!="*"&&i!="/"&&i!="^"){
                int x=stoi(i);
                s.push_back(x);
            }
            else{
                
                double ans=0;
                if (i == "+") {
    ans = s[s.size() - 2] + s.back();
    s.pop_back(); s.pop_back();
    s.push_back(ans);
                    }
                  else if (i == "-") {
    ans = s[s.size() - 2] - s.back();
    s.pop_back(); s.pop_back();
    s.push_back(ans);
}
                  else if (i == "*") {
    ans = s[s.size() - 2] * s.back();
    s.pop_back(); s.pop_back();
    s.push_back(ans);
}
                   else if (i == "/") {
    ans = floor(s[s.size() - 2] / s.back());
    s.pop_back(); s.pop_back();
    s.push_back(ans);
}
                    else if (i == "^") { 
    ans = pow(s[s.size() - 2], s.back());
    s.pop_back(); s.pop_back();
    s.push_back(ans);
}

                           
 }
           }
       return s[0]; 
    }
};

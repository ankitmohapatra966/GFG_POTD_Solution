class Solution {
  public:
    int isValid(string str) {
        
        vector<string>no;
        int i = 0;
        int n = str.length();
        while(i<n){
            string st;
            while(i<n && str[i]!='.'){
                st+=str[i];
                i++;
            }
            no.push_back(st);
            i++;
        }
        if(no.size()!=4){
            return false;
        }
        for(auto it:no){
            if(it.length()>3 || it.length()==0){
                return false;
            }
            int octal = 0;
            for(auto its:it){
                octal = octal*10+(its-'0');
            }
            if(octal<0 || octal>255){
                return false;
            }
            if(octal>=0 && octal<=9 && it.length()>1){
                return false;
            }
            if(octal>=10 && octal<=99 && it.length()>2){
                return false;
            }
        }
        return true;
    }
};

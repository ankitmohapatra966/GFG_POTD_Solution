class Solution 
{ 
    public: 
        vector <int> search(string pattern, string text) 
        {  
            int n = text.length(); 
            int m = pattern.length(); 
            vector<int> index_arr; 
             
            for(int i=0; i<n; i++) { 
                 
                string temp = text.substr(i, m); 
                // cout<<"temp: "<<temp<<endl; 
                 
                if(temp == pattern) 
                    index_arr.push_back(i+1); 
            } 
             
            return index_arr; 
        } 
      
};

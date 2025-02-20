class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double>ans;
        priority_queue<double>mx;
        priority_queue<double,vector<double>,greater<double>>mn;
        for(int i=0;i<arr.size();i++){
            if(mx.empty())mx.push(arr[i]);
            else if(mn.empty()){
                if(mx.top()>arr[i]){
                    mn.push(mx.top());
                    mx.pop();
                    mx.push(arr[i]);
                }else{
                    mn.push(arr[i]);
                }
            }
            else{
                if(arr[i]>mx.top())mn.push(arr[i]);
                else mx.push(arr[i]);
                if(mx.size()>mn.size()){
                    mn.push(mx.top());
                    mx.pop();
                }else if(mn.size()>mx.size()){
                    mx.push(mn.top());
                    mn.pop();
                }
            }
            if(mx.size()==mn.size()){
                ans.push_back((mx.top()+mn.top())/2);
            }else{
               if(mx.size()>mn.size())ans.push_back(mx.top());
               else ans.push_back(mn.top());
            }
        }
        return ans;
        
    }
};

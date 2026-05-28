class Solution {
  private:
    void sum(Node* node, map<int, int> &mp, int level){
        if(node != NULL){
            mp[level] += node->data;
            
            sum(node->left, mp, level-1);
            
            sum(node->right, mp, level+1);
        }
    }
  public:
    vector<int> verticalSum(Node* root) {
        // code here
        vector<int> ans;
        map<int, int> mp;
        sum(root, mp, 0);
        
        for(auto v: mp)
        {
            ans.push_back(v.second);
        }
        
        return ans;
    }
};

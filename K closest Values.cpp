class Solution {
    
    void dfs(Node* root,int target,int k,priority_queue<pair<int,int>>& maxHeap)
    {
        if(!root)return;
        pair<int,int> value(abs(root->data-target),root->data);
        maxHeap.push(value);
        if(maxHeap.size()>k)
           maxHeap.pop();
           
           
        dfs(root->left,target,k,maxHeap);
        dfs(root->right,target,k,maxHeap);
           
        
    }
  public:
    vector<int> getKClosest(Node* root, int target, int k) {
        priority_queue< pair<int,int> > heap;
        
        dfs(root,target,k,heap);
        
        vector<int> ans;
        
        while(heap.size())
        {
            ans.push_back(heap.top().second);
            heap.pop();
        }
        
        return ans;
        
    }
};

class Solution
{
    void inOrder(Node* root , vector<int>& arr){
        if(root == nullptr) return;

        inOrder(root->left , arr);
        arr.push_back(root->data);
        inOrder(root->right , arr);
    }

    public:
    int absolute_diff(Node *root)
    {
        
        int ans = INT_MAX;
        vector<int> arr;
        inOrder(root , arr);
        
        for(int i = 0 ; i < arr.size()-1 ; i++){
            ans = min(ans , abs(arr[i]-arr[i+1]));
        }
        return ans;
    }
};

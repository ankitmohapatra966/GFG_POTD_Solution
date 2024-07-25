class Solution {
  public:
    Node* solution(vector<int>& nums,int left,int right){
        if(left>right) return NULL;
        if(left==right){
            return new Node(nums[left]);
        }
        int mid=(left+right)/2;
        Node* root=new Node(nums[mid]);
        root->left=solution(nums,left,mid-1);
        root->right=solution(nums,mid+1,right);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        
        return solution(nums,0,nums.size()-1);
    }
};

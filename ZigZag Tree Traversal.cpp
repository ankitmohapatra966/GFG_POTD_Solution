class Solution{
public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
{
 vector<int> ans;
 queue<Node*> q;
 q.push(root);
 int k = 0;
 while(!q.empty()) {
  int n = q.size();
  vector<int> tmp;
  for(int i = 0; i < n; i++) {
   auto t = q.front(); q.pop();
   if(t->left) q.push(t->left);
   if(t->right) q.push(t->right);
   tmp.push_back(t->data);
  }
  if(k&1) ans.insert(ans.end(), tmp.rbegin(), tmp.rend());
  else ans.insert(ans.end(), tmp.begin(), tmp.end());
  k++;
 }
 return ans;
}
};

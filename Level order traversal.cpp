class Solution {
public:
    vector<int> levelOrder(Node* root) {
        vector<int> result;
        if (root == nullptr)
            return result;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            result.push_back(current->data);

            if (current->left != nullptr)
                q.push(current->left);
            if (current->right != nullptr)
                q.push(current->right);
        }

        return result;
    }
};

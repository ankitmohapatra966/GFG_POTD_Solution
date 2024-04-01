class Solution {
  public:
void fun(Node* root, vector<int>& v) {
    if (!root) return;
    fun(root->left, v);
     v.push_back(root->data);
    fun(root->right, v);
}

void merge(vector<int>& v, int l, int mid, int r, int& count) {
    vector<int> ans(r - l + 1);
    int left = l, right = mid + 1, k = 0;
    while (left <= mid && right <= r) {
        if (v[left] <= v[right]) {
            ans[k++] = v[left++];
        } else {
            ans[k++] = v[right++];
            count += (mid - left + 1); // Count inversions
        }
    }
    while (left <= mid) {
        ans[k++] = v[left++];
    }
    while (right <= r) {
        ans[k++] = v[right++];
    }
    for (int i = 0; i < k; i++) {
        v[l + i] = ans[i];
    }
}

void mergeSortAndCount(vector<int>& v, int l, int r, int& count) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSortAndCount(v, l, mid, count);
        mergeSortAndCount(v, mid + 1, r, count);
        merge(v, l, mid, r, count);
    }
}

int pairsViolatingBST(int n, Node *root) {
    vector<int> v;
    fun(root, v);
    int count = 0;
    mergeSortAndCount(v, 0, n - 1, count);
    return count;
}

};

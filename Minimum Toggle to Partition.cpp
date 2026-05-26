class Solution {
public:

    int minToggle(vector<int>& arr) {

        int n = arr.size();

        int totalOnes = 0;

        for (int x : arr)
            totalOnes += x;

        int ans = INT_MAX;

        int leftOnes = 0;
        int rightOnes = totalOnes;

        for (int i = -1; i < n; i++) {

            if (i >= 0) {
                leftOnes += arr[i];
                rightOnes -= arr[i];
            }

            int leftCost = leftOnes;

            int rightLength = n - i - 1;
            int rightZeros = rightLength - rightOnes;

            ans = min(ans, leftCost + rightZeros);
        }

        return ans;
    }
};

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        vector<std::tuple<int, int, int>> orders; // (difference, tipA, tipB)
        for (int i = 0; i < n; ++i) {
            orders.emplace_back(std::abs(arr[i] - brr[i]), arr[i], brr[i]);
        }

        // Sort orders based on the absolute difference in descending order
        sort(orders.rbegin(), orders.rend());

        long long totalTips = 0;
        int countA = 0, countB = 0;

        // Distribute orders to maximize tips
        for (const auto& order : orders) {
            int diff = std::get<0>(order);
            int tipA = std::get<1>(order);
            int tipB = std::get<2>(order);

            if ((tipA >= tipB && countA < x) || countB >= y) {
                totalTips += tipA;
                countA++;
            } else {
                totalTips += tipB;
                countB++;
            }
        }

        return totalTips;
    }
};

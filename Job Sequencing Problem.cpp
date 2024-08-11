class Solution {
    public:
    vector<int> JobScheduling(Job arr[], int n) { 
        
        set<int> slots;
        for(int i = 1; i <= n; i++)
            slots.insert(i);
        sort(arr, arr + n, [](Job& j1, Job&j2) {
           return j1.profit > j2.profit; 
        });
        
        int cnt = 0, profit = 0;
        for(int i = 0; i < n; i++) {
            Job curr = arr[i];
            auto it = slots.upper_bound(curr.dead);
            if(it == slots.begin()) continue;
            it = prev(it);
            cnt++;
            profit += curr.profit;
            slots.erase(it);
        }
        
        return {cnt, profit};
    }
};

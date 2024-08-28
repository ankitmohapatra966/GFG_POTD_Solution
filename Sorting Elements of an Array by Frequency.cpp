class Solution {
  public:
    vector<int> sortByFreq(vector<int>& arr) {
    unordered_map<int, int> mp;
    for(int num : arr) 
        mp[num]++;
    
    vector<pair<int, int>> freqVec;
    for(auto& it : mp) {
        freqVec.push_back({it.second, it.first});
    }

    sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) 
            return a.second < b.second; 
        return a.first > b.first;
    });
    
    vector<int> result;
    for(auto& p : freqVec) {
        result.insert(result.end(), p.first, p.second);
    }
    return result;
}
};

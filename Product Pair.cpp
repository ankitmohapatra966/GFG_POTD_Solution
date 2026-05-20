class Solution {
public:
bool isProduct(vector<int>& arr, long long target) {
unordered_map<int, int> mp;
for (int i = 0; i<arr.size(); i++) {
mp[arr[i]]++;
}
if (target == 0) {
if (mp.find(0) != mp.end()) {
return true;
}
return false;
}
for (int i = 0; i<arr.size(); i++) {
if (arr[i] != 0 && target % arr[i] == 0) {
int a = target/arr[i];
mp[arr[i]]--;
if (mp[a] > 0) {
return true;
}
mp[arr[i]]++;
}
}
return false;
}
};
 

class Solution {
public:
    int countNumbers(int n) {
        int m = sqrt(n);
        vector<bool> sieve(m + 1, true);
        sieve[0] = sieve[1] = false;
        for (int i = 2; i * i <= m; ++i) {
            if (!sieve[i]) continue;
            for (int j = i * i; j <= m; j += i) {
                sieve[j] = false;
            }
        }
        vector<int> primes;
        for (int i = 2; i <= m; ++i) {
            if (sieve[i]) primes.push_back(i);
        }
        
        int k = primes.size();
        int res = 0;
        for (int i = 0; i < k && pow(primes[i], 4) <= m; ++i) ++res;
        for (int i = 0; i + 1 < k && primes[i] * primes[i + 1] <= m; ++i) {
            for (int j = i + 1; j < k && primes[i] * primes[j] <= m; ++j) {
                ++res;
            }
        }
        return res;
    }
};

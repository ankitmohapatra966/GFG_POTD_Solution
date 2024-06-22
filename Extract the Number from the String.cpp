class Solution {
public:
    long long ExtractNumber(string sentence) {
        long long maxNumber = -1;
        stringstream ss(sentence);
        string word;

        while (ss >> word) {
            if (all_of(word.begin(), word.end(), ::isdigit)) {
                long long num = stoll(word);

                if (word.find('9') == string::npos) {
                    if (num > maxNumber) {
                        maxNumber = num;
                    }
                }
            }
        }

        return maxNumber;
    }
};

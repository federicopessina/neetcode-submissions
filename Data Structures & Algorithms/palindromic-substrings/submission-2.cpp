class Solution {
public:
    int countSubstrings(string s) {
        int len = s.size();
        int count = 0;

        for (int index = 0; index < len; index++) {

            // Odd-length palindromes
            for (int i = 0; index - i >= 0 && index + i < len; i++) {
                if (s[index - i] != s[index + i]) {
                    break;
                }

                count++;
            }

            // Even-length palindromes
            for (int i = 0; index - i >= 0 && index + i + 1 < len; i++) {
                if (s[index - i] != s[index + i + 1]) {
                    break;
                }

                count++;
            }
        }

        return count;
    }
};
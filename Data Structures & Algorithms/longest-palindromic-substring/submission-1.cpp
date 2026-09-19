class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        if (n <= 1) return s;

        int bestStart = 0;
        int bestLength = 1;

        for (int i = 0; i < n; i++) {

            // Odd-length palindrome
            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > bestLength) {
                    bestStart = left;
                    bestLength = right - left + 1;
                }

                left--;
                right++;
            }

            // Even-length palindrome
            left = i;
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > bestLength) {
                    bestStart = left;
                    bestLength = right - left + 1;
                }

                left--;
                right++;
            }
        }

        return s.substr(bestStart, bestLength);
    }
};
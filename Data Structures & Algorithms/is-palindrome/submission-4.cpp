class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l <= r) {
            auto l_char = s[l], r_char = s[r];
            //ignores all non-alphanumeric characters.
            if (!isCharOK(l_char)) {
                l++; continue;
            }

            if (!isCharOK(r_char)) {
                r--; continue;
            }

            // case-insensitive
            if (tolower(l_char) == tolower(r_char)) {
                l++; r--; continue;
            }

            return false;
        }

        return true;
    }
private:
    bool isCharOK(char c) {
        return isalnum(c) && c != ' ';
    }
};

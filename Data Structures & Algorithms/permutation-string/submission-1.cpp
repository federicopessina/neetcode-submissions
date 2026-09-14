class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int lenS1 = s1.size(), lenS2 = s2.size();
        int left = 0, right = lenS1;

        sort(s1.begin(), s1.end());

        while (right <= lenS2) {
            auto subStr = s2.substr(left, lenS1);
            sort(subStr.begin(), subStr.end());

            if (subStr == s1) return true;
            left++; right++;
        }

        return false;

    }
};

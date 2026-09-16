class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int left = 0, right = 1;
        int len = s.size();
        unordered_set<char> charSet;

        // hedge cases
        if (len == 0) return 0;
        if (len == 1) return 1;
        
        // main algo
        charSet.insert(s[left]);
        while (right < len) {

            if (!charSet.contains(s[right])) {
                charSet.insert(s[right]);
                maxLength = max(maxLength, static_cast<int>(charSet.size()));
                right++;
            } else {
                charSet.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};

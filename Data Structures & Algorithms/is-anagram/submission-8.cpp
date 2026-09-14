class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> letterCount;

        // add elemnts to counter
        for (const auto& letter : s) {
            letterCount[letter] += 1;
        }

        // remove elements to counter
        for (const auto& letter : t) {
            letterCount[letter] -= 1;

            if (letterCount[letter] == 0) {
                letterCount.erase(letter);
            }
        }

        return letterCount.empty();
    }
};

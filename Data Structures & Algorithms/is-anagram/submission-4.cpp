class Solution {
public:
    bool isAnagram(string s, string t) {
        std::string sortedS = s;
        std::string sortedT = t;

        std::sort(sortedS.begin(), sortedS.end());
        std::sort(sortedT.begin(), sortedT.end());

        return sortedS == sortedT;
    }
};

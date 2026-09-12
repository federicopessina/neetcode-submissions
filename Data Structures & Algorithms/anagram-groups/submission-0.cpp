class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<string, vector<string>> strVecMap;
        for (auto str : strs) {
            std::string sortedStr = str;
            std::sort(sortedStr.begin(), sortedStr.end());

            strVecMap[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (auto const& vec : strVecMap) {
            result.push_back(vec.second);
        }
        return result;
    }
};

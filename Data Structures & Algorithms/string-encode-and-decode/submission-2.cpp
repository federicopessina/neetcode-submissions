class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";

        for (const auto& str : strs) {
            result.append(to_string(str.size()));
            result.append(flag);
            result.append(str);
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            while (s[j] != '#')
                j++;

            int len = stoi(s.substr(i, j - i));

            result.push_back(s.substr(j + 1, len));

            i = j + 1 + len;
        }

        return result;
    }

private:
    const string flag = "#";
};


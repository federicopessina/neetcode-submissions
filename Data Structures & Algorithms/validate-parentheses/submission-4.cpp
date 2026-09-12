class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (auto const& c : s) {
            // case stack is empty
            if (stk.empty()) {
                stk.push(c);
                continue;
            }
            // case stack is not-empty
            auto last_inserted_element = stk.top();
            if ((last_inserted_element == '(' && c == ')') 
                || (last_inserted_element == '[' && c == ']')
                || (last_inserted_element == '{' && c == '}')) {
                stk.pop();
            } else {
                stk.push(c);
            }
        }

        return stk.empty();
    }
};

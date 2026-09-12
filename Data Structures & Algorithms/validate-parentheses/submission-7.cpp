class Solution {
private:
    bool isMatching(char open, char close) { 
        return (open == '(' && close == ')') 
            || (open == '[' && close == ']')
            || (open == '{' && close == '}');
    }

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
            if (isMatching(last_inserted_element, c)) {
                stk.pop();
                continue;
            } else {
                stk.push(c);
            }
        }

        return stk.empty();
    }
};

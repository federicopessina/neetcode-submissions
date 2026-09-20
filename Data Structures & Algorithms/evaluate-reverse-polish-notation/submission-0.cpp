class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        for (const string& token : tokens) {
            if (token == "+") {
                add();
            }
            else if (token == "-") {
                subtract();
            }
            else if (token == "*") {
                multiply();
            }
            else if (token == "/") {
                divide();
            }
            else {
                append(token);
            }
        }

        return store.top();
    }

private:
    stack<int> store;

    void add() {
        int b = store.top();
        store.pop();

        int a = store.top();
        store.pop();

        store.push(a + b);
    }

    void subtract() {
        int b = store.top();
        store.pop();

        int a = store.top();
        store.pop();

        store.push(a - b);
    }

    void multiply() {
        int b = store.top();
        store.pop();

        int a = store.top();
        store.pop();

        store.push(a * b);
    }

    void divide() {
        int b = store.top();
        store.pop();

        int a = store.top();
        store.pop();

        store.push(a / b);
    }

    void append(const string& token) {
        store.push(stoi(token));
    }
};
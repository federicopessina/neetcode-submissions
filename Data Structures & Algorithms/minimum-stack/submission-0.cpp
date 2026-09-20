class MinStack {
private:
    struct Elem {
        int val;
        int min;
    };

    std::vector<Elem> store;

public:
    void push(int val) {
        store.push_back({
            val,
            store.empty() ? val : std::min(store.back().min, val)
        });
    }

    void pop() {
        store.pop_back();
    }

    int top() {
        return store.back().val;
    }

    int getMin() {
        return store.back().min;
    }
};
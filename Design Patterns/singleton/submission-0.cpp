class Singleton {
private:
    string m_value;
    Singleton() {}

public:

    static Singleton *getInstance() {
        static Singleton instance;
        return &instance;
    }

    string getValue() {
        return this->m_value;
    }

    void setValue(string &m_value) {
        this->m_value = m_value;
    }
};
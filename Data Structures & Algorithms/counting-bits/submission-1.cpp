class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for (int i = 0; i <= n; i++) {
            int number = i;
            int count = 0;
            while(number != 0) {
                if (isLastBit1(number)) {
                    count++;
                }
                shitBitsRight(number);
            }
            result.push_back(count);
        }
        return result;
    }

private:
    bool isLastBit1(int& n) {
        return (n & 1) == 1;
    }

    void shitBitsRight(int& n) {
        n >>= 1;
    }
};

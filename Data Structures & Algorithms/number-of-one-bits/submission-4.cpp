class Solution {
private:
    bool isLastBit1(const uint32_t& n) {
        return (n & 1) == 1;
    }

    void shiftBitsToRight(uint32_t& n) {
        n >>= 1;
    }

public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0) {
            if (isLastBit1(n)) {
                count++;
            }

            shiftBitsToRight(n);
        }

        return count;
    }
};

class Solution {
private:
    bool isLastBit1(const uint32_t& n) {
        return (n & 1) == 1;
    }

    void shiftLeft(uint32_t& n) {
        n <<= 1;
    }

    void shiftRight(uint32_t& n) {
        n >>= 1;
    }

    void insert1(uint32_t& n) {
        n |= 1;
    } 

public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        uint32_t number = n;
        
        for (int i = 0; i < 32; i++) {
            shiftLeft(result);
            if (isLastBit1(number)) {
                insert1(result);
            }

            shiftRight(number);
        }

        return static_cast<int>(result);
    }
};

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;

        for(int i = 0; i < 32; i++) {
            int bit = n & 1;          // extract last bit
            res = res | (bit << (31 - i));  // place it in reverse position
            n = n >> 1;              // move to next bit
        }

        return res;
        
    }
};

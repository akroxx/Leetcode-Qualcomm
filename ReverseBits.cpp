class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0, shiftsize = 31;
        
        while(n!= 0){
            rev += (n&1) <<shiftsize;
            n>>=1;
            shiftsize--;
        }
        
        return rev;
    }
};
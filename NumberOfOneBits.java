public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int count = 0;
        int checker = 1;
        for(int i = 0; i < 32; i++){
            if ((n & checker) != 0) count++;
            checker <<= 1;
        }
        return count;
    }
}
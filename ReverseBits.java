public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int rev = 0;    //toRet value
        for(int i = 0; i < 32; i++){
            rev <<= 1;  //Shift by one to left
            if ( (n & (1 << i)) != 0){
                rev |= 1;
            }
            /**
            * 1 << i :        Shifts by 'i' to left by adding ending zeros
            * n & ( 1 << i) : Checks if there exist any overlapping bits of 1, if both are 1, then resultant bit is 1 else 0 Hence meaning equivalency to 0
            * (n & (1 << i)) != 0 : Checks if the resultant overlap is 0, if yes, then ending digit no change, if no, then ending digit has +1 change
            */
            
        }
        return rev;
    }
}
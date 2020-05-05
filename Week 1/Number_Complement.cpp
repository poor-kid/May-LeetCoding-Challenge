class Solution {
    
    /* 
        num          = 00000101
        mask         = 00000111
        res          = 00000010
    */
public:
    int findComplement(int num) {
     
        /*Number of bits in a given Number */
        long long bit_count = floor(log2(num)) + 1;
        
        /* (pow(2,bits - 1) XOR num) -> gives the 1's complement */
        long long mask = (long long)pow(2,bit_count) - 1;
        return mask ^ num;
    }
};
class Solution {
public:
    int hammingWeight(int n) {
        int quotient = n;
        int remainder = 0;
        int count = 0;
        while(quotient != 1){
            int quotient_prev = quotient;
            quotient /= 2;
            remainder = quotient_prev - (2*quotient);
            if(remainder == 1){
                count++;
            }
        }
    return count+1;
    }
};
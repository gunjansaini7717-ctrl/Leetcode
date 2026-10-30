/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true;
        }
        if(n < 1 || n%2 != 0){
            return false;
        }
    return isPowerOfTwo(n/2);
    }
};*/




/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n&(n-1)) == 0;
    }
};*/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && ((n & -n) == n);
    }
};
class Solution {
public:
    int countGoodNumbers(long long n) {
        long long evenpos = (n+1)/2;
        long long oddpos = n/2;
        long long mod = 1000000007;
        long long ans1 = power(5, evenpos);
        long long ans2 = power(4, oddpos);
        long long ans = (ans1*ans2) % mod;
    return ans;
    }
private:
    long long power(long long base, long long exp) {
        if(exp == 0){
            return 1;
        }
        long long half = power(base, exp/2);
        long long res = (half * half) % 1000000007;

        if(exp % 2 != 0){
            res = (res * base) % 1000000007;
        }
    return res;
    }
};
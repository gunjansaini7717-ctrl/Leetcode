class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>arr;
        long long xorSum = 0;
        int count = 0;
        for(int num : nums){
            xorSum = xorSum^num;
        }
        int diffbit = xorSum & -xorSum;
        int num1 = 0; int num2 = 0;
        for(int num : nums){
            if(num & diffbit){
                num1 ^= num;
            }
            else{
                num2 ^= num;
            }
        }
    return {num1, num2};
    }
};
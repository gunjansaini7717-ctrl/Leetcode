/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for(int i=0; i<nums.size(); i++){
            single = single^nums[i];
        }
    return single;
    }
};*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0; i<32; i++){
            int countZeros = 0;
            int countOnes = 0;
            for(int &num : nums){
                if((num & (1<<i)) == 0){
                    countZeros++;
                }
                else{
                    countOnes++;
                }
            }
            if(countOnes % 2 != 0){
                result = result | (1<<i);
            }
        }
    return result;
    }
};
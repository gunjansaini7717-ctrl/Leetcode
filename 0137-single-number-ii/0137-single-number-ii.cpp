class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int k=0; k<32; k++){
            int countZeros = 0;
            int countOnes = 0;
            int temp = (1<<k);
            for(int &num : nums){
                if((num & temp) == 0){
                    countZeros++;
                }
                else{
                    countOnes++;
                }
            }
            if(countOnes % 3 != 0){
                result = result |(1<<k);
            }
        }
    return result;
    }
};
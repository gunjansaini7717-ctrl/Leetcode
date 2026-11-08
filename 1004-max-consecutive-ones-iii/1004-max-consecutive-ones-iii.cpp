class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0; int right = 0;
        int zeros = 0;
        int max_len = 0;

        while(right < nums.size()){
            if(nums[right] == 0){
                zeros++;
            }
            while(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            max_len = max(max_len, right-left+1);
            right++;
        }
        return max_len;
    }
};
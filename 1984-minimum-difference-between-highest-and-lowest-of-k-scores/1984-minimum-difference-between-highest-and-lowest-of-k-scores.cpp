class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int mindiff = INT_MAX;
        for(int i=0; i<=nums.size()-k; i++){
            int currentdiff = nums[i+k-1] - nums[i];
            mindiff = min(mindiff, currentdiff);
        }
    return mindiff;
    }
};
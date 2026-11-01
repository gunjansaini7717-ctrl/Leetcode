class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int> temp;
        backtrack(result, nums, 0, temp);
        return result;
    }
private:
    void backtrack(vector<vector<int>> &result, vector<int>&nums, int i, vector<int>&temp){
        if(i == nums.size()){
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        backtrack(result, nums, i+1, temp);
        temp.pop_back();

        backtrack(result, nums, i+1, temp);
    }
};
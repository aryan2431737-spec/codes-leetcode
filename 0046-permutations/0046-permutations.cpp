class Solution {
public:
 vector<vector<int>> result;
   vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0, nums.size() - 1);
        return result;
    }

    void permutation(vector<int>& nums, int i, int SIZE) {
        if (i == SIZE) {
            result.push_back(nums);
            return;
        }
        for (int j = i; j <= SIZE; j++) {
            swap(nums[i], nums[j]);                // swap
            permutation(nums, i + 1, SIZE);        // recursive call
            swap(nums[i], nums[j]);                // backtrack (semicolon added!)
        }
    }
};
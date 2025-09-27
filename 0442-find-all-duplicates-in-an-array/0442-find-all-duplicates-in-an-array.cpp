class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Corrected 'arr' to 'nums'
        vector<int> duplicates;
        int n = nums.size();

        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1]) {
                duplicates.push_back(nums[i]);
            }
        }

        return duplicates;
    }
};
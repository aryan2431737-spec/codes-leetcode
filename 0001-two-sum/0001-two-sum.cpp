class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> indexedNums;

        // Store value and original index
        for (int i = 0; i < n; i++) {
            indexedNums.push_back({nums[i], i});
        }

        // Sort by value
        sort(indexedNums.begin(), indexedNums.end());

        int low = 0, high = n - 1;
        while (low < high) {
            int sum = indexedNums[low].first + indexedNums[high].first;
            if (sum == target) {
                return {indexedNums[low].second, indexedNums[high].second};
            } else if (sum < target) {
                low++;
            } else {
                high--;
            }
        }

        return {}; // No pair found
    }
};
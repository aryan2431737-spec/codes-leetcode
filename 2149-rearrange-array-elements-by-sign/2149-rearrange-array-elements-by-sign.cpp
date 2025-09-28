class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        // Step 1: Separate positive and negative numbers
        for (int num : nums) {
            if (num > 0)
                pos.push_back(num);
            else
                neg.push_back(num);
        }

        // Step 2: Interleave using range-based loop with manual index
        vector<int> result;
        int index = 0;
        for (int x : pos) {
            result.push_back(x);
            result.push_back(neg[index]);
            ++index;
        }

        return result;
    }
};
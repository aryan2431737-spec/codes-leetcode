class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0; i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto&[key,val]:freq){
            if(val==1) return key;
        }
        return -1;
    }
};
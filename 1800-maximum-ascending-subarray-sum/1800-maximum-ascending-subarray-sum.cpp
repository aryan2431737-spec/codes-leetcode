class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currmax=nums[0];
        int best=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                currmax+=nums[i];
            }
            else{
                best=std::max(best,currmax);
                currmax=nums[i];
            }
        }
         best=std::max(best,currmax);
        return best;
        
    }
};
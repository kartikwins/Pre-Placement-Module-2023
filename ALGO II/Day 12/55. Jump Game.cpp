class Solution {
public:
    
    bool rec(vector<int> &nums, int index, vector<int> &dp){
        if(index >= nums.size()-1){
            return true;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        bool val = false;
        for(int i=1; i<=nums[index]; i++){
            val = (val || rec(nums, index + i, dp));
            if(val){
                return val;
            }
        }
        dp[index] = val;
        return dp[index];
    }
    
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return rec(nums, 0, dp);
    }
}; 
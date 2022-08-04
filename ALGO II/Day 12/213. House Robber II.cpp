class Solution {
public:
    int HouseRobber1(vector<int>& nums){
        int n=nums.size();
        if(n==1){return nums[0];}
        if(n==2){return max(nums[0],nums[1]);}
        vector<int> dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){return nums[0];}
        if(n==2){return max(nums[0],nums[1]);}
        vector<int> v1;
        v1.assign(nums.begin(),nums.end()-1);
        vector<int> v2;
        v2.assign(nums.begin()+1,nums.end());

        return max(HouseRobber1(v1),HouseRobber1(v2));
    }
};
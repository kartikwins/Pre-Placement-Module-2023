class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,ans=INT_MAX;
        for (int i:nums) sum+=i;
        if (sum<target) return 0;
        else if (sum==target) return nums.size();
        sum=0;
        while (j<nums.size()) {
            if (sum+nums[j]<target) {
                sum+=nums[j];
                j++;
            }
            else {
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return ans;
    }
};
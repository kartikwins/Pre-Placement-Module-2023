class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
        int n = nums.size();
        int ans = 0;
        for ( int i=0; i<n; i++) {
            if (nums[i]<target){
                ans = i+1;
            }
            
  
        } return ans;

    }
    };
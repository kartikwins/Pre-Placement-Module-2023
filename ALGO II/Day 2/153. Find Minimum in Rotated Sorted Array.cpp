class Solution {
public:
     int findMin(vector<int>& nums) {
         
        int low = 0;
        int high = nums.size()-1;
        int mid;
        
        while(low<=high)
        {
            mid = (low+high)>>1;
            
            if(nums[mid] >= nums[high])
            {
                low = mid+1;
            }
            
            else
            {
                high = mid;
            }
        }
        return nums[mid];
        
    }
};
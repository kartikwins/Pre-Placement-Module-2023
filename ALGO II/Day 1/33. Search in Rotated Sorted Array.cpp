class Solution {
  public:
    int search(vector<int>& nums, int target) {
      int l=0, r=nums.size()-1;
      while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target) 
          return mid;
          
        //the mid is on the right side of the pivot 
        if(nums[mid]>=nums[l]){
          //if the target is located between left bound and the mid --> update right bound
          if(target>=nums[l] && target<nums[mid])
            r=mid-1;
          else
            l=mid+1;
        }
          
        //the mid is on the left side of the pivot
        else{
          //if the target is located between the mid and the right bound --> update left bound
          if(target>nums[mid] && target<=nums[r])
            l=mid+1;
          else
            r=mid-1;
        }
      }
      //cannot find the value in the vector
      return -1;
    }
};
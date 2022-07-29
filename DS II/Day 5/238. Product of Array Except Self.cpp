class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        bool zeros=false;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]) product*=nums[i];
            else if(zeros) {product=0; break;}
            else zeros=true;
        }
        if(zeros and product==0)
            for(int i=0; i<nums.size(); ++i)    nums[i] = 0;
        else if(zeros)
            for(int i=0; i<nums.size(); ++i)    nums[i] = nums[i] ? 0 : product;
        else 
            for(int i=0; i<nums.size(); ++i)    nums[i] = product/nums[i];
        
        return nums;
    }
};
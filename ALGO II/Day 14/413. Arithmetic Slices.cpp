class Solution {
public:
    
        int numberOfArithmeticSlices(vector<int>& nums) {
		int ans=0, a,b,c;
		for(int i=2,j=0;i<nums.size();i++){
			c=nums[i];
			b=nums[i-1];
			a=nums[i-2];
			if((c-b)==(b-a))ans+=(i-(2+j))+1;
			else j=i-1;
		}
		return ans;
	}
        
    
};
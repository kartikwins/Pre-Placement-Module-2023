class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int  zero=0, one=0, two=0;
        for(int i=n-1;i>=0;i--){
            switch(nums[i]){
                case 0: zero++;
                    nums.pop_back();
                    break;
                case 1: one++;
                    nums.pop_back();
                    break;
                default: two++;
                    nums.pop_back();
                    break;
                
            }
        }
        while(zero--){
            nums.push_back(0);
        }
         while(one--){
            nums.push_back(1);
        }
         while(two--){
            nums.push_back(2);
        }
        
    }
};
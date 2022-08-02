class Solution {
private:    
    void solve(int i,vector<int> &nums,set<vector<int>> &ans){
        if(i == nums.size()){
            ans.insert(nums);
            return;
        }        
        for(int j=i;j<nums.size();j++){
            if(i == j or nums[j] != nums[i]){
                swap(nums[i],nums[j]);
                solve(i+1,nums,ans);
                swap(nums[i],nums[j]);
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        solve(0,nums,ans);        
        vector<vector<int>> res(ans.begin(),ans.end());        
        return res;
    }
};
class Solution {
public:
    void createSubsets(int pos, vector<int> sub, vector<int>& nums, vector<vector<int>>& res)
    {
        res.push_back(sub);
        if(pos==nums.size())
        {
            return;
        }
        set<int> st;
        for(int i=pos; i<nums.size(); i++)
        {
            int x = nums[i];
            if(st.find(x)==st.end())
            {
                st.insert(x);
                sub.push_back(x);
                createSubsets(i+1, sub, nums, res);
                sub.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        sort(nums.begin(), nums.end());
        createSubsets(0, sub, nums, res);
        return res;
        
    }
};
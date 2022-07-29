class Solution {
public:
    int subarraySum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        // init map with zero-
        // for case where cur_sum = target
        m[0] = 1;
        int count = 0;
        int cur_sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            cur_sum += nums[i];
            if(m.find(cur_sum-target) != m.end())
                count += m[cur_sum-target];
            if(m.find(cur_sum) != m.end())
                m[cur_sum]++;
            else
                m[cur_sum] = 1;
        }       
        return count;
    }
};
class Solution {
    
    void combinationSum2Helper(vector<int>& candidates, int target, int index, vector<vector<int>> &ans, vector<int> &ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            if(i > index && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            
            ds.push_back(candidates[i]);
            combinationSum2Helper(candidates, target-candidates[i], i+1, ans, ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        combinationSum2Helper(candidates, target, 0, ans, ds);
        return ans;
    }
};
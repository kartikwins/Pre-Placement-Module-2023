class Solution {
public:

int sum =0;
void solve(int ind, vector<vector<int>> &ans, vector<int> &ds,  vector<int> &cand, int target){
    // Inorder to save some time if our sum exceeds the target just return, dont proceed any further
	if(sum> target) return;
	
	//base case
    if(ind == cand.size()) {
        if(sum ==target) ans.push_back(ds);
        return;
    }
    
	//picking an element
	
    ds.push_back(cand[ind]);         //push single element into the data structure
    sum+= cand[ind];                    // add that element
    solve(ind, ans, ds, cand, target );
	
	//not picking an element
    ds.pop_back();
    sum-=cand[ind];
    solve(ind +1, ans, ds,  cand, target);
    
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>ans;
    vector<int>ds;     
    solve(0, ans, ds, candidates, target);
    return ans;
}
};
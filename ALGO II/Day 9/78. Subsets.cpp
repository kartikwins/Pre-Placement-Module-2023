class Solution {
public:
    void rec(vector<int> &s,vector<vector<int>> &ss,vector<int> &a,int ii){
        ss.push_back(s);
        int i;
        for(i=ii;i<a.size();i++){
            s.push_back(a[i]);//consider a[i] in subset
            rec(s,ss,a,i+1);
            s.pop_back();//trigger backtracking by removing a[i] in subset
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& n) {
        vector<int> s;
        vector<vector<int>> ss;
        rec(s,ss,n,0);
        return ss;
    }
};
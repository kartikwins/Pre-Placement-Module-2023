class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        if(n<=1)return 0;
        int count=0;
        vector<int> temp=intervals[0];
        for(int i=1;i<n;i++){
            auto it=intervals[i];
            if(temp[1]>it[0])count++;
            else temp=it;
            // cout<<it[0]<<" "<<it[1]<<endl;
        }
        return count;
    }
};
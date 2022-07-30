class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> vec(26,0);
        int n=s.length();
        for(int i=0;i<n;i++)
            vec[s[i]-'a']=i;//max. impact
        int max_till_now=INT_MIN;
        int max_of_current=0;
        int prev_length=0;
        vector<int> res;
        for(int i=0;i<n;i++){
            max_of_current=vec[s[i]-'a'];
            max_till_now=max(max_till_now,max_of_current);
            if(i==max_till_now){
                res.push_back(i+1-prev_length);
                prev_length=i+1;
            }
        }
        return res;
    }
};
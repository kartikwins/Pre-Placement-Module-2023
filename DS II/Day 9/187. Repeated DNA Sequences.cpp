class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string,int> mp;
        
        int r=0;
        
        int n  = s.size();
        
        
        vector<string> ans;
        
        
        for(int i=0;i<n;i++){

            if(i>=9){
                
                if(mp[s.substr(r,10)]++==1) ans.push_back(s.substr(r,10));
                
                r++;
            }
        }
        
        return ans;
        
    }
};
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        
        
        int n = a.size(), m = b.size(), i = 0, j = 0;
        vector<vector<int>> res;
        
        while(i < n and j < m) {
            
            int as = a[i][0], ae = a[i][1];
            int bs = b[j][0], be = b[j][1];
            
            if(as > be) {
                j += 1;
                continue;
            }
            if(bs > ae) {
                i += 1;
                continue;
            }
            
            vector<int> temp;

            temp.push_back(max(as, bs)); 
            temp.push_back(min(ae, be));
            
            res.push_back(temp);
            
            if((bs >= as and bs <= ae and be >= ae) or (as > bs and ae < be))
                i += 1;
            else if((as >= bs and as <= be and ae >= be) or (bs > as and be < ae))
                j += 1;
        }
        
        return res;
    }
    
}; 
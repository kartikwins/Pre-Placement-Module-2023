class Solution {
public:
    vector<string> ans;
    void solve(string curr,string s,int i)
    {
        
        if(i==s.length())
        {
            ans.push_back(curr);
            return;
        }
        
        if(isdigit(s[i])){
            curr.push_back(s[i]);
            solve(curr,s,i+1);
        }
        else{
            curr.push_back(toupper(s[i]));
            solve(curr,s,i+1);
            curr.pop_back();
            
            curr.push_back(tolower(s[i]));
            solve(curr,s,i+1);
            curr.pop_back();
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        solve("",s,0);
        return ans;
    }
};
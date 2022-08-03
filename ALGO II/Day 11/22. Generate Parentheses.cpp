class Solution {
public:
    vector<string> ans;
    void rec(string output,int cnto,int cntc)
    {
        if(cnto==0 && cntc==0)
        {
            ans.push_back(output);
            return;
        }
        string op1=output;
        string op2=output;
         if( cnto==cntc)
        {
           output.push_back('(');
            rec(output,cnto-1,cntc);
        }
        else if(cnto< cntc)
        {
            if(cnto!=0)
            
            {op1.push_back('(');
            
            rec(op1,cnto-1,cntc);
            }
            op2.push_back(')');
            rec(op2,cnto,cntc-1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        string output;
        int cnto=n,cntc=n;
        rec(output,cnto,cntc);
        return ans;
    }
};
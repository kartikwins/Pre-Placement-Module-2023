class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int> v;
        string ans = "";
        int n = s.length();
        //try to match a open bracket, if not matching then it will be in the list 
        for(int i = 0; i < n; i++){
            if(s[i] == '(') v.push_back(i);
            else if(s[i] == ')'){
                if(v.size() > 0 && s[v.back()] == '(') v.pop_back();
                else v.push_back(i);
            }
        }
        //Now if any of the barces are not matched need to skip those from the string
        if(v.size() == 0) return s;
        for(int i = 0, j = 0; i < n; i++){
            if(j >= v.size() ) ans += s[i];
            else if(i != v[j]) ans += s[i];
            else j++;
        }
        return ans;
    }
};
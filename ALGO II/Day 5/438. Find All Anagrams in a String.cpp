class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        unordered_map<char,int> m;
        int n=s.length();
        int k=p.length();
        int i=0,j=0;
        
        for(char c:p)
            m[c]++;
        int count = m.size();
        
        while(j<n)
        {
            if(m.find(s[j]) != m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                    count--;
            }
            int windowSize = j-i+1;
            if(windowSize<k)
            {
                j++;
            }
            else if(windowSize==k)
            {
                if(count==0)
                    result.push_back(i);
                if(m.find(s[i]) != m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]]==1)
                        count++;
                }
                i++;j++;
            }
        }
        return result;
    }
};
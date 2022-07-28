class Solution
{
    public:
        bool backspaceCompare(string s, string t)
        {
            stack<char> st1;
            stack<char> st2;
            int i = 0;
            int j = 0;
            while (i < s.size())
            {
                if (s[i] != '#')
                {
                    st1.push(s[i]);
                }
                else if (s[i] == '#' && !st1.empty())
                {
                    st1.pop();
                }
                i++;
            }
            while (j < t.size())
            {
                if (t[j] != '#')
                {
                    
                    st2.push(t[j]);
                }
                else if (t[j] == '#' && !st2.empty())
                {
                    st2.pop();
                } 
                j++;
            }
            return st1 == st2;
        }
};
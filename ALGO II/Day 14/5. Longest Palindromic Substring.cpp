class Solution {
public:
    string longestPalindrome(string s) {
        int a = 0;
        int b = 0;
        int e = s.length() - 1;
        int p = 0, q = 0;
        for (int i = 0; i < e; i++) {
            a = i;
            b = i;
            while(b < e && s[i] == s[b + 1]) {
                ++b;
            }
            while(true) {
                if (s[a] != s[b]) {
                    ++a;
                    --b;
                    break;
                }
                if (a == 0 || b == e) break;
                --a;
                ++b;
                
            }
            if ((b - a) > (q - p)) {
                p = a;
                q = b;
            }
        }
        return s.substr(p, (q - p) + 1);
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int currLen = 0, maxLen = 0, breakPoint = -1;
        for (int i = 0; s[i]; i++) {
            char c = s[i];
            if (map.find(c) == map.end()) {
                currLen++;
                map[c] = i;
            }
            else {
                if (map[c] > breakPoint) {
                    maxLen = max(maxLen, currLen);
                    currLen = i - map[c];
                    breakPoint = map[c];
                    map[c] = i;
                }
                else {
                    currLen++;
                    map[c] = i;
                }
            }
        }
        return max(maxLen, currLen);
    }
};
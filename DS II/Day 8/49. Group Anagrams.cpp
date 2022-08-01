class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map_of_anagrams;
        vector<vector<string>> ordered_anagram;
        for(string k : strs){
            string temp = k;
            sort(temp.begin(), temp.end());
            map_of_anagrams[temp].push_back(k);
        }
        for(auto x : map_of_anagrams){
            ordered_anagram.push_back(x.second);
        }
        return ordered_anagram;
    }
};
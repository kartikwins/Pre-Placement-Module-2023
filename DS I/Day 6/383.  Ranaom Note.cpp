class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(int i=0; i<magazine.size(); i++)
        {
            m[magazine[i]]++;  // push all characters of magazine into map m
        }
        for(int i=0; i<ransomNote.size(); i++)
        {
            if(m.find(ransomNote[i])== m.end() || m[ransomNote[i]]==0 )
            {
               return false;           // find ransomNote characters in the map
            }
            m[ransomNote[i]]--;
        }
        return true;
    }
};
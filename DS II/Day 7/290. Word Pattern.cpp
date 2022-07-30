class Solution {
public:
    bool wordPattern(string pat, string s) {
        vector<string>words;
        string word;
        stringstream str(s);
        while(str>>word)
            words.push_back(word);
        if(words.size()!=pat.length())
            return false;
        unordered_map<string,char>map1;
        unordered_map<char,string>map2;
        for(int i=0;i<words.size();i++)
        {
            if(map1.find(words[i])==map1.end())
                map1[words[i]]=pat[i];
            else if(map1[words[i]]!=pat[i])
                return false;
            if(map2.find(pat[i])==map2.end())
                map2[pat[i]]=words[i];
            else if(map2[pat[i]]!=words[i])
                return false;
        }
        return true;
    }
};
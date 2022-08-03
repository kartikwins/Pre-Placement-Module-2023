class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.empty()) return res;
        helper(0, digits, "", res);
        return res;
    }
                      
    void helper(int index, string d, string soFar, vector<string>& res) {
        if (index == d.size()) {
            res.push_back(soFar);
        } else {
            char d1 = ((d[index] - '2') * 3) + 'a';
            if (d[index] > '7') d1++;
            char d2 = d1 + 1;
            char d3 = d2 + 1;
            
            helper(index+1, d, soFar+d1, res);
            helper(index+1, d, soFar+d2, res);
            helper(index+1, d, soFar+d3, res);
            if (d[index] == '7' || d[index] == '9') helper(index+1, d, soFar+char(d3+1), res);
        }
    }
};
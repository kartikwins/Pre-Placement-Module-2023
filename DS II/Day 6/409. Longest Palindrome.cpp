  class Solution {
    public:
        int longestPalindrome(string s) {
            unordered_map<char, int> mp;
            for(auto c:s){
                mp[c]++;
            }

            int count=0;
            bool oddExists = false;
            for(auto i:mp){
                if(i.second %2==0){
                   count += i.second; 
                }
                else{
                    count += i.second-1;
                    oddExists = true;
                }
            }
            if(oddExists==true){
                count++;
            }
            return count;
        }
    };
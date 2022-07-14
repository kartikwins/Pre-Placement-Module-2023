class Solution {
public:
    string reverseWords(string s) {
    int j=0;
    int i=0;
    
    for(;i<s.size();i++){
        
        if( s[i]==' ' ){
            
            reverse(s.begin()+j , s.begin()+i);
            j=i+1;
            
        }        
    }
     reverse(s.begin()+j , s.begin()+i);
    
    return s;
        
    }
};
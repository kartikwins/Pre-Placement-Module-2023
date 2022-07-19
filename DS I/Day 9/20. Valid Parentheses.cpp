class Solution {
public:
    bool isValid(string s) { // returns true if s is a valid parentheses string 
        stack<char> st; // use stack to store the string
        for(auto i:s){ // loop through the string
            if(i=='(' or i=='{' or i=='[') st.push(i); // if it is a left bracket, push it into the stack
            else // if it is a right bracket
            {
                if(st.empty() || (st.top()=='(' && i!=')') or (st.top()=='{' && i!='}') or (st.top()=='[' && i!=']') ) // if the stack is empty or the top of the stack is not the corresponding left bracket
                    return false; // return false
                st.pop(); // pop the top of the stack
            }
        }
        return st.empty(); // if the stack is empty, return true
    }
};
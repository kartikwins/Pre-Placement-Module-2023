class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1, j = num2.size()-1, carry = 0;
        string ans;
        while(carry || (i >= 0 || j >= 0)){
            int a = 0, b = 0;
            if(i >= 0)a = num1[i--] - '0';
            if(j >= 0)b = num2[j--] - '0';
            int sum = a + b + carry;
            carry = sum / 10;
            sum %= 10;
            ans += to_string(sum);
        }
        if(carry > 0) ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
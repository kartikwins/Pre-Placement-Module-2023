class Solution {
public:
    string multiply(string num1, string num2) {
        string ans;
        int n = num1.size(), m = num2.size();
        if(num1 == "0" || num2 == "0")
            return "0";
        vector<int>temp(n+m, 0);
        int carry = 0;
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                temp[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                temp[i+j] += temp[i+j+1]/10;
                temp[i+j+1] = temp[i+j+1]%10;
            }
        }
        int i = 0;
        bool flag = false;
        while(i<temp.size()){
            if(temp[i]==0 && !flag)
                i++;
            else{
                flag = true;
                ans += (temp[i]+'0');
                i++;
            }
        }
        return ans;
    }
};
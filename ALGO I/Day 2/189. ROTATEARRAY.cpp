class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
    
    reverse(nums.begin(),nums.end()); // firstly reverse whole array.
    
    reverse(nums.begin(),nums.begin()+k);// Now, reverse first K elements.
    
    reverse(nums.begin()+k,nums.end());// Finally,reverse the elements except first k elements.

    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>m;
		// counting each number from the array using hashmap:
        for(auto i:nums){
            m[i]++;
        }
		// check if the number's frequency is greater than half size of the array and return it's value immediately:
        for(auto i:m){
            if(i.second>size/2){
                return i.first;
            }
        }
        return 0;
    }
};
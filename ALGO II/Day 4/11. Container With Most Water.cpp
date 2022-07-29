class Solution {
public:

int maxArea(vector<int>& height) {
    int low = 0;
    int high = height.size()-1;
    int largest = 0;
    while(low<high){
        int breadth = high - low;
    int length = min(height[low],height[high]);
        int area = breadth*length;
        if(area>largest){
            largest = area;
        }
        if(height[low]>height[high]){
            high--;
        }
        else{
            low++;
        }
    }
    return largest;
}
};
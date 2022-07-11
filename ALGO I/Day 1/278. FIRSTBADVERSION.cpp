class Solution {
public:
    int firstBadVersion(int n) {
       
        int left=1 , right=n , middle;
        
        while (right-left > 1){
            middle = left + (right-left)/2;
            if (isBadVersion(middle)) right=middle;
            else  left = middle;
            
        }
         if(isBadVersion(left)) return left;
        return right;
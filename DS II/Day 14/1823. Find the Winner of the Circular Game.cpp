class Solution {
public:
    int findTheWinner(int n, int k) {   // 5  2
        queue<int> q;
        for(int i=1; i<=n; i++) {
            q.push(i);   // 1  2  3  4  5  
        }
        //pick and pop k elements from front and push them at back of queue 
        while(q.size() > 1) { //3 
            for(int i=1; i<k; i++) {//1           2          //1        2       //1      2      //1     2
               int x = q.front();   //1           2          //3        4       //5      1      //3     5
               q.pop();             // 1          2          //3        4       //5      1      //3     5
               q.push(x);           // 2 3 4 5 1; 3 4 5 1 2  //4 5 1 3; 5 1 3 4 //1 3 5; 3 5 1  //5 3;  3 5
            }
            //then pop k th element which is at top of the queue 
            q.pop();   // 3 4 5 1   // 5 1 3    //3 5  //3
        }
        return q.front();  //3
    }
};
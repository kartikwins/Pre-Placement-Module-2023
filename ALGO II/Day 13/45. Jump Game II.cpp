class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if(n==1)    return 0;
        queue<int> q;
        q.push(0);
        vector<bool> vis(n, false);
        vis[0]= 1;
        int count =0;
        while(!q.empty()){
            int size= q.size();
            count++;
            while(size--){
                int curr= q.front();
                q.pop();
                
                int val =nums[curr];
                for(int i=1;i<=val;i++){
                    if(curr+i == n-1)
                        return count;
                    if(!vis[curr+ i]){
                        q.push(curr+ i);
                        vis[curr+i]=1;
                    }
                }
            }
        }
        return count;
    }
};
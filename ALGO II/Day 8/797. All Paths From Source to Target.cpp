class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> v;
        vector<int> temp;
        fun(graph, v, temp ,0);
        return v;
    }
    void fun(vector<vector<int>>& graph, vector<vector<int>>& v, vector<int>& temp, int i)
    {
        if(i == graph.size()-1)
        {
            temp.push_back(i);
            v.push_back(temp);
            temp.pop_back();
            return;
        }
        temp.push_back(i);
        for(auto val:graph[i])
        {
            fun(graph,v,temp,val);
        }
        temp.pop_back();
    }
};
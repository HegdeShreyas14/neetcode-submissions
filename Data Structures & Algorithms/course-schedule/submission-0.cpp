class Solution {
public:

    bool dfs(int node , vector<int>& vis , vector<int>& pathvis , vector<vector<int>>& adj){
        vis[node] = 1;
        pathvis[node] = 1;
        for(auto & it : adj[node]){
            if(!vis[it]){
                if(dfs(it , vis , pathvis , adj) == true) return true;
            }
            else if(pathvis[it] == 1) return true;
        }
        pathvis[node] = 0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for(auto& pre : prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        vector<int> vis(numCourses);
        vector<int> pathvis(numCourses);        
        for(int i =0;i < numCourses;i ++){
            if(!vis[i]){
                if(dfs(i , vis , pathvis , adj) == true) return false;
            }
        }
        return true;
    }
};
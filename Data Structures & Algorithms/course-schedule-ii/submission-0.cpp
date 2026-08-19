class Solution {
public:
    bool dfs(int node, vector<int>& visited, vector<int>& pathvis, vector<vector<int>>& adj, stack<int>& st){
        visited[node] = 1;
        pathvis[node] = 1; 

        for(auto it : adj[node]) {
            if(!visited[it]) {
                if(dfs(it, visited, pathvis, adj, st) == true) return true;
            }
            else if(pathvis[it]) {
                return true; 
            }
        }

        pathvis[node] = 0; 
        st.push(node);     
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]);
        }

        vector<int> visited(numCourses, 0);
        vector<int> pathvis(numCourses, 0);
        stack<int> st;

        for(int i = 0; i < numCourses; i++) {
            if(!visited[i]) {
                if(dfs(i, visited, pathvis, adj, st) == true) {
                    return {}; 
                }
            }
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
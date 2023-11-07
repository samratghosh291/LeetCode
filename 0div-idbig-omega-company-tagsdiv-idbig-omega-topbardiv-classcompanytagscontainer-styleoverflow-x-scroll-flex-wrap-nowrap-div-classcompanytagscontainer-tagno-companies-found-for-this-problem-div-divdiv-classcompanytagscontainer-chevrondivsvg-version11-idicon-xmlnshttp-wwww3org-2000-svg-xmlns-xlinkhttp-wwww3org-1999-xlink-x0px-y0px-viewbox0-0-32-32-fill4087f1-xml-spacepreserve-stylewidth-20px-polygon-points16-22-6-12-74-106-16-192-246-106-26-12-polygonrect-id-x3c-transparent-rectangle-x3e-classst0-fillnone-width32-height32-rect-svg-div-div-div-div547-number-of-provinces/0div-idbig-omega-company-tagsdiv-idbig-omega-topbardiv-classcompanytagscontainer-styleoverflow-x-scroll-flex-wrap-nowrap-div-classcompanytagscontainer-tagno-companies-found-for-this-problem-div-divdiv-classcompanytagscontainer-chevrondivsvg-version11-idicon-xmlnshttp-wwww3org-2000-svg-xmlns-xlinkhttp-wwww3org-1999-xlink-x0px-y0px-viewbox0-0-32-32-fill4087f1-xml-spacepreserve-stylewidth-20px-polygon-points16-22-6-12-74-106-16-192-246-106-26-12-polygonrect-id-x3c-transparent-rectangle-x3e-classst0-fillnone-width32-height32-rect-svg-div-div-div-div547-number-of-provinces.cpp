class Solution {
private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
        
        //mark the visited array as 1
        vis[node] = 1;
        
        //visit all it;s adjacency list elements
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& mat) {
        int v = mat.size();
        int count = 0;

        // convert adjacency matrix to adjacency list
        vector<vector<int>> adj(v, vector<int>());
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (mat[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        // Make a visited array
        vector<int> vis(v, 0);
        
        //count the no odf provinces
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                count++;
                dfs(i, adj, vis);
            }
        }

        return count;
    }
};

class Solution {
  public:
     vector<int> dfs(vector<vector<int>>& adj) {
           int V = adj.size();

           vector<int> visited(V, 0);
           vector<int> ans;

           dfs(0, adj, visited, ans);

           return ans;
       }
       void dfs(int node, vector<vector<int>> &adj, vector<int> &visited, vector<int> &ans) {
              visited[node] = 1;
              ans.push_back(node);

              for (int x : adj[node]) {
                  if (visited[x] == 0) {
                      dfs(x, adj, visited, ans);
                  }
              }
          }
};
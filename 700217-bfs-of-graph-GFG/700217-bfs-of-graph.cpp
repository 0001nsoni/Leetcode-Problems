class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V = adj.size();
        vector<bool> visited(V,false);
        vector<int> res;
        queue<int> q;
        
        int src=0;
        visited[src]=true;
        q.push(src);
        while(!q.empty())
        {
            int curr= q.front();
            q.pop();
            res.push_back(curr);
            for(int x : adj[curr])
            {
                if(!visited[x])
                {
                    visited[x]=true;
                    q.push(x);
                }
            }
        }
        return res;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
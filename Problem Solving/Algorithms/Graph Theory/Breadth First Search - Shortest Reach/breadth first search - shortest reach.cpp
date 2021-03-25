// TODO: Record the video for the "Breadth First Search - Short Reach" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/bfsshortreach/problem
 * Updated video explanation: Pending
 * Last verified on: March 8, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the bfs function below.
vector<int> bfs(int& n, int& m, vector<vector<int>>& edges, int& s) {
    map<int, list<int>> adj; // Create adjacent list
    bool valid_test = false;
    for (int i = 0; i < edges.size(); i++) {
        // Starting node validation (may not be connected)
        if (edges[i][0] == s || edges[i][1] == s)
            valid_test = true;
        // Proceed with the lists
        adj[edges[i][0]].emplace_back(edges[i][1]);
        adj[edges[i][1]].emplace_back(edges[i][0]);
    }

    vector<bool> visited(n + 1, false); // All nodes
    vector<bool> calculated(n + 1, false);
    vector<int> distance(n + 1, 0); // Distances of all edges
    vector<int> ans(n + 1, 0);

    if (valid_test) {
        // BFS algorithm
        queue<int> q; // The queue for the BFS algorithm
        q.emplace(s); // Push the starting node first
        while (!q.empty()) {
            int current = q.front();
            visited[current] = true;
            q.pop();
            // Traverse child nodes
            for (list<int>::iterator itr = adj[current].begin(); itr != adj[current].end(); ++itr) {
                int child = *itr;
                if (visited[child] == false && calculated[child] == false) {
                    distance[child] = distance[current] + 6;
                    ans[child] = distance[child];
                    // Important: Nodes may share adjacent nodes
                    // Avoid re-calculating node distance
                    calculated[child] = true;
                    q.emplace(child);
                }
            }
        }
    }

    vector<int>::iterator ans_itr = ans.begin();
    ans.erase(ans_itr); // Remove the first position
    for (int i = 0; i < ans.size(); i++) {
        // Erase the starting node
        if (i == s - 1) ans.erase(ans_itr + s - 1);
        if (ans[i] == 0) ans[i] = -1;
    }

    return ans;
}
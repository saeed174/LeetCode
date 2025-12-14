class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& state) {
        if (state[node] == 1) return false; // cycle
        if (state[node] == 2) return true;  // already safe

        state[node] = 1; // visiting
        for (int next : graph[node]) {
            if (!dfs(next, graph, state))
                return false;
        }
        state[node] = 2; // visited
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);

        for (auto& p : prerequisites) {
            graph[p[1]].push_back(p[0]); // b -> a
        }

        vector<int> state(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            if (state[i] == 0) {
                if (!dfs(i, graph, state))
                    return false;
            }
        }
        return true;
    }
};

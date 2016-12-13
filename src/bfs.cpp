#include "bfs.hpp"
#include <queue>

using std::vector;
using std::queue;

void bfs(const vector<vector<int>> & graph, const int start,
		vector<bool> & used, vector<int> & distance, vector<int> & parent) {
    queue<int> q;
	q.push(start);
	used[start] = true;	

	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int i = 0; i < graph[v].size(); ++i) {
			int to = graph[v][i];
			if (!used[to]) {
				q.push(to);
				used[to] = true;
				distance[to] = distance[v] + 1;
				parent[to] = v;
			}
		}
	}
}
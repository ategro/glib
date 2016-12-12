#ifndef NSU_BFS
#define NSU_BFS

#incldue <vector>
#include <queue>

// used - посещенные вершины
// distance - колличество ребер от start до вершины
// parent - родитель вершины	
void bfs(const vector<vector<int>> & graph, const int start, 
		vector<bool> & used, vector<int> & distance, vector<int> & parent) {
	int n = graph.size(); // число вершин
    queue<int> q; // очередь вершин
	q.push(start);
	used[s] = true;	
	
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (size_t i = 0; i < graph[v].size(); ++i) {
			int to = graph[v][i];
			if (!used[to]) {
				q.push(to);
				used[to] = true;
				distance[to] = distance[v] + 1;
				papern[to] = v;
			}
		}
	}
}

#endif



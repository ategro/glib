#ifndef NSU_DIJKSTRA
#define NSU_DIJKSTRA

#include <vector>

constexpr int inf = 1000000000;

// color - цвет вершины (0, 1, 2)
// time_in - время захода в вершину
// time_out - время выхода из вершины
// start_time - начальное время
void dijkstra(const vector<vector<pair<int, int>>> & graph, const int start, 
		vector<bool> used, vector<int> & distance, vector<int> & parent) {
	int n = graph.size(); // колличество вершин
	
	used = vector<bool>(n); // посещенение вершин
	distance = vector<int>(n, inf); // растояния от вершины start до других вершин
	parent = vector<int>(n); // родители вершин
	

	distance[s] = 0;
	vector<char> used(n);
	
	for (int i = 0; i < n; ++i) {
        	int v = -1;
		for (int j = 0; j < n; ++j) {
			if (!used[j] && (v == -1 || distance[j] < distance[v])) {
				v = j;
			}
		}

		if (distance[v] == inf) {
			break;
		}
		used[v] = true;

		for (size_t j = 0; j < graph[v].size(); ++j) {
			int to = graph[v][j].first;
			int len = graph[v][j].second;

			if (distance[v] + len < distance[to]) {
				distance[to] = distance[v] + len;
				parent[to] = v;
			}
		}
	}
}

#endif

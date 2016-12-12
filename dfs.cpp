#ifndef NSU_DFS
#define NSU_DFS

#include <vector>

// color - цвет вершины (0, 1, 2)
// time_in - время захода в вершину
// time_out - время выхода из вершины
// start_time - начальное время
void dfs(const vector<vector<int>> & graph, const int start, 
		vector<bool> & color, vector<int> & time_in, vector<int> & time_out,
		int & start_time = 0) {
	time_in[start] = dfs_timer++;
	color[start] = 1;
	
	for (size_t i = 0; i < graph[start].size(); ++i) {
		int to = graph[start][i];
		if (color[to] == 0) {
			dfs(graph, to, color, time_in, time_out, start_time);
		}
	}
	
	time_out[start] = dfs_timer++;
	color[start] = 2;	
}

#endif

#include "dfs.hpp"

using std::vector;

int dfs(const vector<vector<int>> & graph, const int start, 
		vector<bool> & color, vector<int> & time_in, vector<int> & time_out,
		int start_time) {
	time_in[start] = start_time++;
	color[start] = 1;
	
	for (int i = 0; i < graph[start].size(); ++i) {
		int to = graph[start][i];
		if (color[to] == 0) {
			start_time = dfs(graph, to, color, time_in, time_out, start_time);
		}
	}
	
	time_out[start] = start_time++;
	color[start] = 2;
	
	return start_time;
}

#ifndef NSU_BFS
#define NSU_BFS

#incldue <vector>
#include <queue>

// used - ���������� �������
// distance - ����������� ����� �� start �� �������
// parent - �������� �������	
void bfs(const vector<vector<int>> & graph, const int start, 
		vector<bool> & used, vector<int> & distance, vector<int> & parent) {
	int n = graph.size(); // ����� ������
    queue<int> q; // ������� ������
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



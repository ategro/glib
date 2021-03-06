﻿#include "dijkstra.hpp"

using std::vector;
using std::pair;

constexpr int inf = 1000000000;

void dijkstra(const vector<vector<pair<int, int>>> & graph, const int start, 
		vector<bool> & used, vector<int> & distance, vector<int> & parent) {
	int n = graph.size();

	used = vector<bool>(n); 
	distance = vector<int>(n, inf); 
	parent = vector<int>(n);


	distance[start] = 0;

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

		for (int j = 0; j < graph[v].size(); ++j) {
			int to = graph[v][j].first;
			int len = graph[v][j].second;

			if (distance[v] + len < distance[to]) {
				distance[to] = distance[v] + len;
				parent[to] = v;
			}
		}
    }
}

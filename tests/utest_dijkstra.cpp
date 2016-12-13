#include <gtest/gtest.h>
#include "dijkstra.hpp"
 
using std::vector;

TEST(Dijkstratest, simple) {
	vector<vector<pair<int, int>>> graph(3);
	graph[0].push_back({1, 5});
	int start = 0;
	vector<bool> used(3);
	vector<int> distance(3);
	vector<int> parent(3);

	bfs(graph, start, used, distance, parent);
	
	EXPECT_EQ(true, used[0]);
	EXPECT_EQ(true, used[1]);
	EXPECT_EQ(false, used[2]);
	EXPECT_EQ(0,          distance[0]);
	EXPECT_EQ(5,          distance[1]);
	EXPECT_EQ(1000000000, distance[2]);
	EXPECT_EQ(0, parent[0]);
	EXPECT_EQ(0, parent[1]);
	EXPECT_EQ(0, parent[2]);
}

#include <gtest/gtest.h>
#include "bfs.hpp"
 
using std::vector;

TEST(BFStest, simple) {
	vector<vector<int>> graph(3);
	graph[0].push_back(1);
	int start = 0;
	vector<bool> used(3);
	vector<int> distance(3);
	vector<int> parent(3);

	bfs(graph, start, used, distance, parent);
	
	EXPECT_EQ(true, used[0]);
	EXPECT_EQ(true, used[1]);
	EXPECT_EQ(false, used[2]);
	EXPECT_EQ(0, distance[0]);
	EXPECT_EQ(1, distance[1]);
	EXPECT_EQ(0, distance[2]);
	EXPECT_EQ(0, parent[0]);
	EXPECT_EQ(0, parent[1]);
	EXPECT_EQ(0, parent[2]);
}

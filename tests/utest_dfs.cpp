#include <gtest/gtest.h>
#include "dfs.hpp"

using std::vector;

TEST(DFStest, simple) {
	vector<vector<int>> graph(3);
	graph[0].push_back(1);
	int start = 0;
	vector<bool> color(3);
	vector<int> time_in(3);
	vector<int> time_out(3);

	dfs(graph, start, color, time_in, time_out);
	
	EXPECT_EQ(2, color[0]);
	EXPECT_EQ(2, color[1]);
	EXPECT_EQ(0, color[2]);
	EXPECT_EQ(0, time_in[0]);
	EXPECT_EQ(1, time_in[1]);
	EXPECT_EQ(0, time_in[2]);
	EXPECT_EQ(3, time_out[0]);
	EXPECT_EQ(2, time_out[1]);
	EXPECT_EQ(0, time_out[2]);
}

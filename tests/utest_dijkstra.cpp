#include <gtest/gtest.h>
 
using std::vector;

	int start = 0;
	vector<bool> used(3);
	vector<int> distance(3);
	vector<int> parent(3);

	bfs(graph, start, used, distance, parent);
	
	EXPECT_EQ(true, used[0]);
	EXPECT_EQ(true, used[1]);
	EXPECT_EQ(false, used[2]);
	EXPECT_EQ(0, parent[0]);
	EXPECT_EQ(0, parent[1]);
	EXPECT_EQ(0, parent[2]);
}

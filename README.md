# glib
Алгоритмы на графах: обход в ширину, обход в глубину и алгоритм Дейкстры.

void bfs(const vector<vector<int>> & graph, 
         const int                   start, 
               vector<bool>        & used, 
               vector<int>         & distance, 
               vector<int>         & parent
        )

int dfs(const vector<vector<int>> & graph,
        const int                   start,
              vector<int>         & color,
              vector<int>         & time_in,
              vector<int>         & time_out,
              int 	                start_time = 0 
       )	
	   
void dijkstra(const vector<vector<pair<int, int>>> & graph,
              const int                              start, 
		            vector<bool>                   & used, 
					vector<int>                    & distance, 
					vector<int>                    & parent
			 )



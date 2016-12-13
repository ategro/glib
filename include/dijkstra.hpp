#ifndef NSU_DIJKSTRA
#define NSU_DIJKSTRA

#include <vector>
#include <utility>

/** 
	@file dijkstra.hpp
 */

/**
	@brief Алгоритм Дейкстры
	@param[in] graph - список смежности вершин
	@param[in] start - стартовая вершина
	@param[out] used - посещенные вершины
	@param[out] distance - растояние от start до вершин
	@param[out] parent - родители вершин

	Дан ориентированный или неориентированный взвешенный граф с n вершинами и
	m рёбрами. Веса всех рёбер неотрицательны. Указана некоторая стартовая 
	вершина start. Требуется найти длины кратчайших путей из вершины start во
	все остальные вершины.
 */

void dijkstra(const std::vector<std::vector<std::pair<int, int>>> & graph, 
		const int start, std::vector<bool> used, std::vector<int> & distance,
		std::vector<int> & parent)

#endif

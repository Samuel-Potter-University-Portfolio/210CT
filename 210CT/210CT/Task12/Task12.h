#pragma once
#include <string>
#include <unordered_map>
#include <set>
#include <vector>

/**
TASK (Advanced)

Implement the structure for an unweighted, undirected graph G, where nodes consist of positive integers. 
Also, implement a function isPath(v, w), where v and w are vertices in the graph, to check if there is a path between the two nodes. 
The path found will be printed to a text file as a sequence of integer numbers (the node values).
**/


namespace TASK_12
{
	typedef unsigned int uint;

	//Unweighted but not strictly undirected (Must be handled on input)
	class Graph 
	{
	private:
		std::unordered_map<uint, std::set<uint>> adjacency_table;
		uint largest_node = 0;

	public:
		inline void CreateNode(uint key, std::set<uint> neighbours) { adjacency_table[key] = neighbours; }
		inline std::set<uint>& GetNeighbours(uint key) { return adjacency_table[key]; }
		bool AreNeighbours(uint v, uint w);

		bool IsPath(uint v, uint w, std::vector<uint>& out);
		inline const uint GetLargestNode() { return largest_node; }
	private:
		bool IsPath(uint v, uint w, std::vector<uint>& out, bool* visited);

	public:
		static Graph Construct(std::string file_path);
	};

	void Execute();
}

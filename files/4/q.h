#include <climits>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

// A class to represent a directed graph.
class Graph {
 private:
  // Maps each node u to a set of (v, weight) pairs, i.e. each node u is mapped
  // to a set of pairs. The first item in the pair, v, is a node that is a
  // successor of u, and the second item in the pair is the weight of edge
  // (u,v).
  std::map<int, std::set<std::pair<int, int>>> weight_map_;

 public:
  // Constructor:
  Graph(std::map<int, std::set<std::pair<int, int>>> &weight_map)
      : weight_map_(weight_map) {}

  // Returns a map of a node to a set of its predecessors.
  std::map<int, std::set<int>> GetPredecessors();

  // Returns a set of all (u,v) edges in a graph.
  std::set<std::pair<int, int>> GetEdges();

  // Returns the weight of the (i,j) edge. Returns INT_MAX if no edge between
  // them exits.
  int GetWeight(int i, int j);

  // Returns the weight of the minimum edge in the graph.
  int GetMinWeight();

  // Returns a vector of size n, which has the shortest distances from the
  // source to all other nodes in the graph.
  std::vector<long> Dijkstra(int source);

  // Returns a vector of size n, which has the shortest distances from the
  // source to all other nodes in the graph using Bellman-Ford algorithm.
  //
  // Hint for graphs with negative edges:
  // In the relaxing step, we normally check:
  //
  // if (d[u] + w < d[v]) {
  //       d[v] = d[u] + w;
  // }
  //
  // However, if d[v]==INT_MAX, d[u]==INT_MAX, and w < 0, then the new value of
  // d[v] becomes INT_MAX - |w|, which should still be considered as infinity.
  // You should enhance the if statement to protect against this case..
  std::vector<long> BellmanFord(int source);

  // Optional question (won't be tested or graded):
  // Returns true if there is a negative cycle in the graph.
  bool DoesGraphHaveANegativeCycle();
};

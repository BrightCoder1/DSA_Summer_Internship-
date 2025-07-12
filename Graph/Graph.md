Graph: A graph is a data structure in mathematics and computer science that consists of a set of nodes (also called vertices) connected by edges. Graphs are used to model relationships between objects, such as networks, social connections, or paths in a map. There are different types of graphs, including directed and undirected graphs, weighted and unweighted graphs, and more.

Type of graph: 
1.Undirected Graph
Definition: A graph where edges have no direction.
Example: A friendship network where each connection is mutual.

2.Directed Graph (Digraph)
Definition: A graph where edges have a direction, going from one vertex to another.
Example: Twitter followers, where one user can follow another without reciprocation.

3.Weighted Graph
Definition: A graph where each edge has a numerical value (weight) associated with it.
Example: A road map where edges represent roads and weights represent distances.

4.Unweighted Graph
Definition: A graph where all edges are considered equal, with no weights.
Example: A simple social network with only connections.

5.Cyclic Graph
Definition: A graph that contains at least one cycle (a path that starts and ends at the same vertex).
Example: A network of roads forming a loop.

6.Acyclic Graph
Definition: A graph with no cycles.
Example: A family tree.

7. Trivial Graph
Definition: A graph that consists of only a single vertex and no edges.
Example: A graph with just one node and no connections.

8. Connected Graph
Definition: A graph in which there is a path between every pair of vertices, meaning all nodes are reachable from any other node.
Example: A computer network where every computer can communicate with every other computer, possibly through intermediate devices.



<!-- Graph Representation: -->
Graphs can be represented in several ways in computer science:

1. Adjacency Matrix
Definition: A 2D array where each cell (i, j) indicates if there is an edge between vertex i and vertex j.
Example:
For a graph with 3 vertices and edges (1-2), (2-3):
    0 1 2
  0 0 1 0
  1 1 0 1
  2 0 1 0

2. Adjacency List
Definition: An array or list where each index represents a vertex and stores a list of adjacent vertices.
Example:
0: 1
1: 0, 2
2: 1

3. Incidence Matrix
Definition: A 2D array where rows represent vertices and columns represent edges. Each cell indicates if a vertex is incident to an edge.
Example:
For a graph with vertices 0, 1, 2 and edges e1(0-1), e2(1-2):
    e1 e2
0:  1  0
1:  1  1
2:  0  1



<!-- Difference between tree and graph -->

Difference Between Tree and Graph:

1. Structure:
   - Tree: A tree is a special type of graph that is connected and acyclic, with N nodes and N-1 edges.
   - Graph: A graph can be cyclic or acyclic, connected or disconnected, and can have any number of edges.

2. Hierarchy:
   - Tree: Has a hierarchical structure with a root node and parent-child relationships.
   - Graph: Does not have a hierarchical structure; relationships can be arbitrary.

3. Cycles:
   - Tree: Cannot contain cycles.
   - Graph: May contain cycles.

4. Connectivity:
   - Tree: Always connected.
   - Graph: May be connected or disconnected.

5. Edge Count:
   - Tree: Always has exactly N-1 edges for N nodes.
   - Graph: Can have any number of edges.

Example:
   - Tree: A family tree, file directory structure.
   - Graph: Social network, road map.


Applications Of Graphs:
                Social media
                Neural network
                Finding the shortest path


Traversal of Graph:
Graph traversal means visiting all the nodes in a graph in a systematic way. The two main methods are:

1. Breadth-First Search (BFS)
   - Explores the graph level by level, visiting all neighbors of a node before moving to the next level.
   - Uses a queue data structure.
   - Example: Finding the shortest path in an unweighted graph.

2. Depth-First Search (DFS)
   - Explores as far as possible along each branch before backtracking.
   - Uses a stack data structure (or recursion).
   - Example: Detecting cycles in a graph, topological sorting.

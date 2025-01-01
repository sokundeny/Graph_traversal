# Graph Traversal Using BFS and DFS

## Overview
- This program demonstrates **Breadth-First Search (BFS)** and **Depth-First Search (DFS)** on a graph.
- The graph is implemented using an adjacency list where each node is connected to its neighbors with weighted edges.

## BFS (Breadth-First Search)
- **BFS** explores the graph level by level, visiting all neighbors before moving to the next level.

### BFS Traversal
- Starts from the given starting vertex.
- Uses a **queue** to keep track of nodes to visit.
- Marks nodes as **visited** to avoid revisiting them by using set.

## DFS (Depth-First Search)
- **DFS** explores deeply along each branch before backtracking.

### DFS Traversal
- Starts from the given starting vertex.
- Uses **recursion** to explore deeply through neighbors.
- Marks nodes as **visited** to avoid revisiting them by using set.

## Observations
- **DFS** is great for exploring deep paths in the graph, but it may require extra memory for recursion.
- **BFS** is ideal for finding the shortest path in unweighted graphs, but it can use more memory due to the queue.

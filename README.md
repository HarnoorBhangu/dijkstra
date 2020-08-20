# Title: Dijkstra's Algorithm
## Purpose: 
#### Dijkstra’s algorithm finds a shortest path tree from a single source node, by building a set of nodes that have minimum distance from the source.
## Input:
#### The graph has the following:
#### vertices, or nodes, denoted in the algorithm by v or u.
#### weighted edges that connect two nodes: (u,v) denotes an edge, and w(u,v)denotes its weight. In the diagram on the right, the weight for each edge is written in gray
## Algorithm:
### 1. Set all vertices distances = infinity except for the source vertex, set the source distance = 0.
### 2. Push the source vertex in a min-priority queue in the form (distance , vertex), as the comparison in the min-priority queue will be according to vertices distances.
### 3. Pop the vertex with the minimum distance from the priority queue (at first the popped vertex = source).
### 4. Update the distances of the connected vertices to the popped vertex in case of "current vertex distance + edge weight < next vertex distance", then push the vertex with the new distance to the priority queue.
### 5. If the popped vertex is visited before, just continue without using it.
### 6. Apply the same algorithm again until the priority queue is empty.

## Testing:
#### To test the program, the program prompts user for:
#### TG[max[max]= ?
####    n=?
####    u=?

## 
## 
### Author: Harnoor Bhangu

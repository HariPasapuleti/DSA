# DSA

# Complexity Table

## Table of Contents
1. [Sorting Algorithms](#sorting-algorithms)
2. [Linked List](#linked-list)
3. [Queue Operations](#queue-operations)
4. [Stack Operations](#stack-operations)
5. [Shortest Path Algorithms](#shortest-path-algorithms)


<!-- # Sorting Algorithms -->

<!-- ### Merge Sort -->

# Linked List

```bash
Node x = Node(2, nullptr);
Node* y = &x;

## Or

Node* y = new Node(2, nullptr);
```

# Floyd's Warshall Algorithm

### #include<iomanip> consists:
* setw(10) sets the width of the output field to 10 characters.
* setfill('*') fills any extra space with *.
* fixed and setprecision(2) format floating-point numbers with two decimal places.
* hex and uppercase format numbers in hexadecimal with uppercase letters.
* boolalpha prints boolean values as true or false.

### Floyd-Warshall Algorithm

1. The Floyd-Warshall algorithm is a classic algorithm used to find the shortest paths between all pairs of vertices in a weighted graph. 
2. It can handle graphs with positive or negative edge weights but `does not work with negative weight cycles.`

### Algorithm Overview

The Floyd-Warshall algorithm works by iteratively improving the estimates of the shortest paths between each pair of vertices. It uses a dynamic programming approach to consider each vertex as an intermediate point in the path between every pair of vertices.

### Steps

1. **Initialization:**
   - Create a distance matrix `D` where `D[i][j]` represents the shortest distance from vertex `i` to vertex `j`.
   - Initialize `D[i][j]` to the weight of the edge between `i` and `j` if there is an edge; otherwise, initialize it to infinity (`∞`), except for `D[i][i]`, which should be 0 (the distance from a vertex to itself).

2. **Dynamic Programming Iteration:**
   - Iterate through each vertex `k` in the graph.
   - For each pair of vertices `(i, j)`, update `D[i][j]` to be the minimum of `D[i][j]` and `D[i][k] + D[k][j]`.

3. **Result:**
   - After completing the iterations, `D[i][j]` contains the shortest distance from vertex `i` to vertex `j`.

### Pseudocode

```text
function FloydWarshall(graph):
    // graph is represented as an adjacency matrix
    n = number of vertices in graph
    D = adjacency matrix of graph
    
    // Initialize the distance matrix
    for each vertex i in graph:
        for each vertex j in graph:
            if i != j and there is no edge between i and j:
                D[i][j] = ∞
            else if i == j:
                D[i][j] = 0
    
    // Main Floyd-Warshall algorithm
    for each vertex k in graph:
        for each vertex i in graph:
            for each vertex j in graph:
                if D[i][j] > D[i][k] + D[k][j]:
                    D[i][j] = D[i][k] + D[k][j]
    
    return D
```

### If there is negative cycle we put a condition like. 
    ```bash
    for(int i = 0; i < n; i++)
    {
        if(matrix[i][i] < 0) return somthing;
    }
    ```


### Complexity
1. Time Complexity: O(n^3), where n is the number of vertices. This is due to the three nested loops in the algorithm.
2. Space Complexity: O(n^2), due to the storage of the distance matrix.



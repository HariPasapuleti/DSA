
# Complexity Table

## Table of Contents
1. [Sorting Algorithms](#sorting-algorithms)
2. [Linked List Operations](#linked-list-operations)
3. [Queue Operations](#queue-operations)
4. [Shortest Path Algorithms](#shortest-path-algorithms)

## Sorting Algorithms

## Sorting Algorithms

| Algorithm          | Time Complexity (Best) | Time Complexity (Average) | Time Complexity (Worst) | Space Complexity | Description                                      |
|--------------------|-------------------------|---------------------------|-------------------------|------------------|--------------------------------------------------|
| Bubble Sort        | O(n)                    | O(n²)                     | O(n²)                   | O(1)             | Simple comparison-based sort.                   |
| Selection Sort     | O(n²)                   | O(n²)                     | O(n²)                   | O(1)             | Selects the minimum element and places it.      |
| Insertion Sort     | O(n)                    | O(n²)                     | O(n²)                   | O(1)             | Builds the sorted array one item at a time.     |
| Merge Sort         | O(n log n)              | O(n log n)                | O(n log n)              | O(n)             | Divide-and-conquer sort.                        |
| Quick Sort         | O(n log n)              | O(n log n)                | O(n²)                   | O(log n)         | Divide-and-conquer with partitioning.           |
| Heap Sort          | O(n log n)              | O(n log n)                | O(n log n)              | O(1)             | Builds a heap and extracts the maximum element. |
| Radix Sort         | O(nk)                   | O(nk)                     | O(nk)                   | O(n + k)         | Non-comparative integer sort.                   |



## Linked List Operations

| Operation           | Time Complexity | Space Complexity | Description                               |
|---------------------|-----------------|------------------|-------------------------------------------|
| Access (by index)   | O(n)            | O(1)             | Linear search through the list.           |
| Insertion (at head) | O(1)            | O(1)             | Adds element at the beginning.            |
| Insertion (at tail) | O(n)            | O(1)             | Adds element at the end (requires traversal). |
| Deletion (by value) | O(n)            | O(1)             | Search and remove the specified element.  |
| Search              | O(n)            | O(1)             | Linear search for a value.                |

## Queue Operations

| Operation           | Time Complexity | Space Complexity | Description                             |
|---------------------|-----------------|------------------|-----------------------------------------|
| Enqueue             | O(1)            | O(1)             | Adds an element to the end.             |
| Dequeue             | O(1)            | O(1)             | Removes an element from the front.      |
| Peek                | O(1)            | O(1)             | Views the front element without removing.|
| Search              | O(n)            | O(1)             | Searches for an element in the queue.   |

## Shortest Path Algorithms

| Algorithm           | Time Complexity (Average) | Time Complexity (Worst) | Space Complexity | Description                                     |
|---------------------|---------------------------|-------------------------|------------------|-------------------------------------------------|
| Dijkstra's Algorithm | O(E log V)                | O(E log V)              | O(V)             | Finds shortest paths from a single source.     |
| Bellman-Ford        | O(VE)                     | O(VE)                   | O(V)             | Handles negative weights and finds shortest paths. |
| Floyd-Warshall      | O(V³)                     | O(V³)                   | O(V²)            | Finds shortest paths between all pairs of vertices. |
| A* Search           | O(E)                      | O(b^d)                  | O(b^d)           | Uses heuristics for more efficient shortest path finding. |


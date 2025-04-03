
# Algorithms Overview

## Table of Contents
1. [Sorting Algorithms](#sorting-algorithms)
2. [Linked Lists](#linked-lists)
3. [Queues](#queues)
4. [Stacks](#stacks)
5. [Shortest Path Algorithms](#shortest-path-algorithms)

## Sorting Algorithms

### 1. Bubble Sort
- **Applications**:
  - Educational demonstrations for sorting concepts.
  - Simple use cases with small datasets.
  - Implemented in scenarios where simplicity is more critical than efficiency.

- **Advantages**:
  - Simple to implement.
  - Requires no additional memory.

- **Disadvantages**:
  - Inefficient for large datasets (O(n²) time complexity).
  - Not suitable for performance-critical applications.

### 2. Selection Sort
- **Applications**:
  - Sorting small arrays or lists.
  - Situations where memory write operations are costly.
  - Scenarios where simplicity and minimal swapping are beneficial.

- **Advantages**:
  - Simple and intuitive.
  - Performs a minimal number of swaps.

- **Disadvantages**:
  - Inefficient for large datasets (O(n²) time complexity).
  - Does not adapt to the initial order of data.

### 3. Insertion Sort
- **Applications**:
  - Sorting small or nearly sorted datasets.
  - Implemented in adaptive sorting algorithms like Timsort.
  - Used in online sorting where data arrives incrementally.

- **Advantages**:
  - Simple and efficient for small or nearly sorted datasets.
  - Adaptive; performs better with partially sorted data.

- **Disadvantages**:
  - Inefficient for large datasets (O(n²) time complexity).
  - Performance degrades significantly with large, unsorted data.

### 4. Merge Sort
- **Applications**:
  - Large datasets where stability is important.
  - Sorting linked lists.
  - External sorting algorithms (e.g., in databases).

- **Advantages**:
  - Stable sort with guaranteed O(n log n) time complexity.
  - Efficient for large datasets and works well with linked lists.

- **Disadvantages**:
  - Requires additional memory for merging.
  - Complexity of implementation compared to simpler sorts.

### 5. Quick Sort
- **Applications**:
  - General-purpose sorting in libraries and applications.
  - Implemented in many standard libraries (e.g., C++ STL, Java Collections).
  - Used in scenarios where average-case performance is crucial.

- **Advantages**:
  - Efficient average-case performance (O(n log n)).
  - In-place sort, requiring minimal additional memory.

- **Disadvantages**:
  - Worst-case performance is O(n²), though this is rare with good pivot selection.
  - Can be complex to implement correctly.

### 6. Heap Sort
- **Applications**:
  - Priority queue implementations.
  - Scheduling algorithms (e.g., task scheduling in operating systems).
  - Data stream management (e.g., maintaining top-k elements).

- **Advantages**:
  - Guarantees O(n log n) time complexity.
  - In-place sorting algorithm.

- **Disadvantages**:
  - Not stable (does not preserve the order of equal elements).
  - Slightly slower in practice compared to Quick Sort.

### 7. Radix Sort
- **Applications**:
  - Sorting integers and strings.
  - Numerical analysis and processing (e.g., fixed-point arithmetic).
  - Large-scale sorting where data range is known.

- **Advantages**:
  - Linear time complexity (O(nk)) for certain types of data.
  - Non-comparative sorting algorithm.

- **Disadvantages**:
  - Limited to specific types of data.
  - Requires additional space for counting and sorting digits.

## Linked Lists

### 1. Singly Linked List
- **Applications**:
  - Dynamic memory allocation in applications.
  - Implementations of stacks and queues.
  - Basic building block for more complex data structures like hash tables.

- **Advantages**:
  - Dynamic size, efficient insertions/deletions.
  - Requires less memory overhead than arrays.

- **Disadvantages**:
  - Inefficient for random access (O(n) time complexity).
  - Extra memory usage for pointers.

### 2. Doubly Linked List
- **Applications**:
  - Implementations of complex data structures (e.g., deques, certain types of caches).
  - Systems requiring bidirectional traversal (e.g., undo functionality in applications).
  - Real-time systems where backward traversal is needed.

- **Advantages**:
  - Allows bidirectional traversal.
  - Easier to delete nodes if you have a reference to them.

- **Disadvantages**:
  - Requires more memory for the extra pointer.
  - More complex to implement compared to singly linked lists.

### 3. Circular Linked List
- **Applications**:
  - Round-robin scheduling (e.g., CPU scheduling in operating systems).
  - Implementations of circular buffers (e.g., in streaming data systems).
  - Navigation systems requiring circular traversal (e.g., carousel interfaces).

- **Advantages**:
  - No need to handle the end of the list; easy circular traversal.
  - Useful for certain buffer implementations.

- **Disadvantages**:
  - Can be complex to handle edge cases and iterations.
  - Can lead to infinite loops if not managed properly.

## Queues

### 1. Array-based Queue
- **Applications**:
  - Implementations where the maximum queue size is known (e.g., buffer management).
  - Simple task scheduling (e.g., print job management).
  - Queues in algorithms with fixed-size requirements.

- **Advantages**:
  - Simple to implement.
  - Constant time complexity for enqueue and dequeue operations.

- **Disadvantages**:
  - Fixed size, which can lead to wasted space or overflow.
  - Inefficient if elements need to be shifted.

### 2. Linked List-based Queue
- **Applications**:
  - Implementations where dynamic size is required (e.g., task scheduling in real-time systems).
  - Systems with frequent enqueue and dequeue operations (e.g., networking buffers).
  - Applications where the maximum size is not known in advance.

- **Advantages**:
  - Dynamic size, no need for resizing.
  - Efficient enqueue and dequeue operations (O(1) time complexity).

- **Disadvantages**:
  - Extra memory overhead for pointers.
  - Slightly more complex to implement compared to array-based queues.


## Stacks

### 1. Stack (Array-based)
- **Applications**:
  - Function call management (e.g., call stack in programming languages).
  - Undo mechanisms in applications (e.g., text editors).
  - Expression evaluation (e.g., postfix notation).

- **Advantages**:
  - Simple to implement and understand.
  - Constant time complexity for push and pop operations.

- **Disadvantages**:
  - Fixed size, which can lead to stack overflow if the maximum size is not known.
  - Less flexible compared to dynamic implementations.

### 2. Stack (Linked List-based)
- **Applications**:
  - Function call management with dynamic size (e.g., runtime call stack).
  - Complex undo functionality with varying usage (e.g., graphical editors).
  - Parsing and evaluating expressions with dynamic requirements.

- **Advantages**:
  - Dynamic size, no need for resizing.
  - Efficient operations with O(1) time complexity for push and pop.

- **Disadvantages**:
  - Extra memory usage for pointers.
  - More complex implementation compared to array-based stacks.

### 3. Stack (Dynamic Array-based)
- **Applications**:
  - Flexible function call management (e.g., growing stack space in modern systems).
  - Implementations where the stack needs to grow beyond initial capacity.
  - Efficient memory use for dynamic needs (e.g., large-scale applications).

- **Advantages**:
  - Can grow as needed, accommodating varying workloads.
  - Good trade-off between memory and performance.

- **Disadvantages**:
  - More complex than fixed-size array-based stacks.
  - May require reallocation and copying, affecting performance in extreme cases.

## Shortest Path Algorithms

### 1. Dijkstra's Algorithm
- **Applications**:
  - Network routing protocols (e.g., OSPF in computer networks).
  - Pathfinding in GPS systems.
  - Real-time mapping and navigation systems.

- **Advantages**:
  - Efficient for graphs with non-negative weights.
  - Guarantees shortest path from a single source.

- **Disadvantages**:
  - Not suitable for graphs with negative edge weights.
  - Requires a priority queue for optimal performance.

### 2. Bellman-Ford Algorithm
- **Applications**:
  - Currency exchange arbitrage detection.
  - Route optimization in graphs with negative weights.
  - Network protocols that need to handle negative weight edges.

- **Advantages**:
  - Can handle negative edge weights.
  - Detects negative weight cycles.

- **Disadvantages**:
  - Slower compared to Dijkstra's algorithm (O(VE) time complexity).
  - Less efficient for graphs without negative weights.

### 3. Floyd-Warshall Algorithm
- **Applications**:
  - Finding shortest paths between all pairs of vertices in dense graphs.
  - Network analysis (e.g., all-pairs shortest path problems).
  - Application in transitive closure computations.
  - Flight Connectivity In the aviation industry to find the shortest path between the airports.
  - GIS(Geographic Information Systems) applications often involve analyzing spatial data, such as road networks, to find the shortest paths between locations.
  - Kleene’s algorithm which is a generalization of floyd warshall, can be used to find regular expression for a regular language.

- **Advantages**:
  - Finds shortest paths between all pairs of vertices.
  - Simple to implement.

- **Disadvantages**:
  - Time complexity of O(V³), not suitable for very large graphs.
  - Requires O(V²) space, which can be substantial for large graphs.



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


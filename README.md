# Heap Algorithms

A comprehensive collection of heap data structure implementations and algorithms in C++. This repository covers fundamental heap operations, priority queue applications, and common algorithmic problems solved using heaps.

## 📚 Contents

### Core Implementation
- **[priorityQueue.cpp](priorityQueue.cpp)** - Custom heap implementation with push, pop, and heapify operations. Includes examples of priority queues with custom objects and comparators.

### Sorting
- **[heapSort.cpp](heapSort.cpp)** - Heap sort algorithm with O(n log n) time complexity. Demonstrates building a max heap and sorting elements in place.

### Algorithmic Problems

| File | Problem | Approach |
|------|---------|----------|
| [cars.cpp](cars.cpp) | K Nearest Cars | Min heap to find K closest points to origin |
| [nRopes.cpp](nRopes.cpp) | Connect N Ropes | Min heap for optimal rope connection cost |
| [slidWindow.cpp](slidWindow.cpp) | Sliding Window Maximum | Max heap with index tracking for window queries |
| [weakestSold.cpp](weakestSold.cpp) | K Weakest Rows | Min heap with custom comparator for soldier count |
| [pqPairs.cpp](pqPairs.cpp) | Priority Queue with Pairs | Custom comparator for pair-based priority queues |

## 🔑 Key Concepts Covered

- **Heap Properties**: Max heap and min heap implementations
- **Custom Comparators**: Using structs and operator overloading for complex objects
- **Time Complexity**: O(log n) insertion and deletion, O(n) heapify
- **STL Priority Queue**: Practical usage of `std::priority_queue` with various configurations
- **Problem Patterns**: Greedy algorithms, K-closest elements, sliding window techniques

## 🚀 Usage

Compile any file using g++:
```bash
g++ -o output priorityQueue.cpp
./output
```

Each file contains a `main()` function with example test cases demonstrating the implementation.

## 📖 Learning Path

1. Start with **priorityQueue.cpp** to understand basic heap operations
2. Study **heapSort.cpp** to see heaps in sorting algorithms
3. Explore problem-specific implementations to understand heap applications
4. Experiment with custom comparators in **pqPairs.cpp** and **weakestSold.cpp**

## 💡 Use Cases

Heaps are essential for:
- Finding K largest/smallest elements
- Implementing priority-based scheduling
- Graph algorithms (Dijkstra's, Prim's)
- Median maintenance in streaming data
- Merge K sorted arrays

---

**Author**: Princekr267  
**Language**: C++  
**Data Structure**: Heap / Priority Queue

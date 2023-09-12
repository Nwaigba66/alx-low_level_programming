#C - Search Algorithms

##A search algorithm is a step-by-step procedure or set of rules that are designed to find a specific piece of information or locate a particular item within a collection of data. Search algorithms are fundamental to computer science and are used in various applications, including information retrieval, data processing, artificial intelligence, and more.

There are different types of search algorithms, each suited to different types of data structures and search requirements. Here are some common types of search algorithms:

- Linear Search: In a linear search, also known as a sequential search, each item in a collection is examined one by one until the target item is found or the entire collection has been searched. This method is simple but may be inefficient for large datasets.
- Binary Search: Binary search is an efficient algorithm for finding a specific element in a sorted collection (e.g., a sorted array or list). It works by repeatedly dividing the search interval in half and comparing the target value to the middle element, eliminating half of the search space with each comparison. Binary search is much faster than linear search for large datasets.
Hashing: Hashing is a technique that involves mapping data to a fixed-size array, where each data element is stored at a specific index determined by a hash function. This allows for fast retrieval of data when the key (or search term) is known.
- Depth-First Search (DFS): DFS is an algorithm used for traversing or searching tree or graph structures. It starts at the root node and explores as far as possible along each branch before backtracking. It's often used for tasks like maze solving and graph traversal.
- Breadth-First Search (BFS): BFS is another algorithm for traversing or searching tree or graph structures. It explores all the neighbor nodes at the present depth before moving to the next level. BFS is commonly used in algorithms like finding the shortest path in a graph.
- A Search:* A* is an informed search algorithm that combines elements of both breadth-first and greedy searches. It is often used for finding the shortest path in a weighted graph, using a heuristic function to guide the search.
- Binary Search Tree (BST): A BST is a data structure that stores elements in a sorted order, allowing for efficient searching, insertion, and deletion of elements. It follows a specific ordering property where elements less than the current node are stored in the left subtree, and elements greater than the current node are stored in the right subtree.

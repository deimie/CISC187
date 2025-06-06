#### TASK 1 - Imagine you were to take an empty binary search tree and insert the following sequence of numbers in this order: [1, 5, 9, 2, 4, 10, 6, 3, 8]. Draw a diagram showing what the binary search tree would look like. Remember, the numbers are being inserted in the order presented here. (2 points)
```
      1
       \
        5
       / \
     2     9
      \   / \
       4 6   10
      /   \
     3     8
```

#### TASK 2 - If a well-balanced binary search tree contains 1,000 values, what is the maximum number of steps it would take to search for a value within it? (1 point)
A well-balanced binary tree has a search time efficiency of O(log(n)). This means that a BST with 1,000 values would take a maximum of log(1,000) or approximately 10 steps.

#### TASK 1 - Draw what the following heap would look like after we insert the value 11 into it:
```
           11
        /      \
      10        8
    /    \     / \
  6       9   7   4
 / \     / \
2   1   3   5
```

#### TASK 2 - Draw what the previous heap would look like after we delete the root node.
```
           9
       /      \
      6        8
    /    \     / \
  3       5  7   4
 / \     
2   1   
```

#### TASK 3 - Imagine you’ve built a brand-new heap by inserting the following numbers into the heap in this particular order: 55, 22, 34, 10, 2, 99, 68. If you then pop them from the heap one at a time and insert the numbers into a new array, in what order would the numbers now appear?

Initial - [55, 22, 34, 10, 2, 99, 68]
```
Initial Heap
      55
    /   \
  22     34
 / \    /  \
10  2  99  68

Max Heap
      99
    /   \
  22     68
 / \    /  \
10  2  34  55
```
Pop Elements (Remove root each time)  
[99, 68, 55, 34, 22, 10, 2]


If you were to pop from the root of the max-heap, the result will be an array sorted in descending order. This is because every time you pop the root, you are removing hte largest value in the heap.

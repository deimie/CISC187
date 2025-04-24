#### Task 1 - Explain with the help of an example "Why Dijkstra's algorithm fails on negative weights".
The issue with Dijkstra's algorithm when negative weights are involved is that the algorithm assumes that once it visits a vertex it already knows the shortest path to that vertex. With non-negative weights, this would always be the case. With negative weights, however, if another path later on has a negative weight, this new path could potentially be shorter than the path that the algorithm already determined as shortest.

```
Ex.
        A
      /   \
     2     1
    /       \
   B --(-3)-> C
```

Here is how Djikstra's algorithm would process the above graph. Note that when a node is visited, it as marked as such and will not be revisited:
  
Initial distances: A=0, B=∞, C=∞
1. Visit A:  
2. Update distances: A=0, B=2, C=1
3. Visit C, since it is closer than B
4. Visit B

Output: A=0, B=2, C=1  
Actual: A=0, B=2, C=-1

When C was first visited the algorithm prematurely determined the shortest path as A -> C. In reality it is A -> B -> C, but the algorithm already visited C and the new shortest path which is discovered later gets ignored.
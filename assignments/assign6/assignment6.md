

#### TASK 1 - Using Figure 17 as a model, in the book Data Structures in C++, illustrate the result of each operation in the sequence PUSH(S,4), PUSH(S,1), PUSH(S,3), POP(S), PUSH(S,8), and POP(S) on an initially empty stack S stored in array S [1...6 ].
| Operation | Stack       |
|-----------|-------------|
| PUSH(S,4) | 4 _ _ _ _ _ |
| PUSH(S,1) | 4 1 _ _ _ _ |
| PUSH(S,3) | 4 1 3 _ _ _ |
| POP(S)    | 4 1 _ _ _ _ |
| PUSH(S,8) | 4 1 8 _ _ _ |
| POP(S)    | 4 1 _ _ _ _ |


#### TASK 2 - Using Figure 18 as a model, in the book Data Structures in C++, illustrate the result of each operation in the sequence ENQUEUE(Q,4), ENQUEUE(Q,1), ENQUEUE(Q,3), DEQUEUE(Q), ENQUEUE(Q,8), and DEQUEUE(Q) on an initially empty queue Q stored in array Q [1...6 ].
| Operations   | Queue       |
|--------------|-------------|
| ENQUEUE(Q,4) | 4 _ _ _ _ _ |
| ENQUEUE(Q,1) | 4 1 _ _ _ _ |
| ENQUEUE(Q,3) | 4 1 3 _ _ _ |
| DEQUEUE(Q)   | _ 1 3 _ _ _ |
| ENQUEUE(Q,8) | _ 1 3 8 _ _ |
| DEQUEUE(Q)   | _ _ 3 8 _ _ |

#### TASK 3 -Rewrite ENQUEUE and DEQUEUE to detect underflow and overflow of a queue. (see Listings 4 & 5 in the book). 

#### TASK 4 - A stack allows insertion and deletion of elements at only end, and a queue allows insertion at one end and deletion at the other end, a deque (double-ended queue) allows insertion and deletion at both ends. Write four O ( 1 ) -time procedures to insert elements into and delete elements from both ends of a deque implemented by an array.

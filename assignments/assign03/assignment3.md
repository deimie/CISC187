#### TASK 1 - Use Big O Notation to describe the time complexity of an algorithm that takes 4 N + 16 steps.
The answer is ```O(N)``` since constants are dropped in big O.

---
#### TASK 2 - Use Big O Notation to describe the time complexity of an algorithm that takes 2N^2.
It would be ```O(N^2)```, once again since constants are dropped.

---
#### TASK 3 - Use Big O Notation to describe the time complexity of the following function, which returns the sum of all numbers of an array after the numbers have been doubled.
Since the program iterates through every item in the inputted array once to append their doubled values to the new array and once more to add their values to sum, this would take ```O(2N)``` steps. In big O, however, constants are dropped, leaving the answer as ```O(N)```.

---
#### TASK 4 - Use Big O Notation to describe the time complexity of the following function, which accepts an array of strings and prints each string in multiple cases.
In this case, the program iterates through every string in the inputted array. It also iterates through every letter in each string with the upcase, dwoncase, and capitalize functions. Therefore, if we let "len" = the average length of a string in the array, then the complexity would be  
```O(N * 3 * len)```. Once we drop the constants, the final answer is ```O(N * len)```.

---
#### TASK 5 - The next function iterates over an array of numbers, and for each number whose index is even, it prints the sum of that number plus every number in the array. What is this function’s efficiency in terms of Big O Notation?
The outer loop will start by iterating ```O(N)``` times to get through each array element. Then, for each even index ```(N/2)```, the program will execute O(N) operations to add the sum of all other indexes. This becomes ```O(N) * O(N/2)```. The 1/2 constant is dropped, and the final answer is ```O(N^2)```.

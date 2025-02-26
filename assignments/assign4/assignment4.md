#### TASK 1 - Proof that, under the average-case scenario, the insertion sort has a time complexity of O ( N 2 ) . Draw a clear figure and show all the operations clearly.


---
#### TASK 2 - At the start of the insertion sort, the index of the inspected value is set to 1. Change the index of the inspected value and verify that the total number of operations equals 20. Consider the worst-case scenario. Use N=5, where N is the number of elements.


---
#### TASK 3 - The following function returns whether or not a capital “X” is present within a string.
**(a) What is this function’s time complexity regarding Big O Notation?**  
The function's time complexity is O(n) since the program must iterate through all of the letters within the string in the worst case scenario where there is no x.

**(b) Then, modify the code to improve the algorithm’s efficiency for best- and average-case scenarios.**
``` cpp
function containsX(string) {
    foundX = false;
    for(let i = 0; i < string.length; i++) { 
        if (string[i] === "X") {
          foundX = true;
          return foundX;
        }
    }
    return foundX; 
}
```
Now, when X is found, the program returns the ```foundX``` variable immediately. Before, the program wouldn't return anything until the entire string had been iterated through.

---

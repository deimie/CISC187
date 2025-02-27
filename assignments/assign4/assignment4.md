#### TASK 1 - Proof that, under the average-case scenario, the insertion sort has a time complexity of O (N^2) . Draw a clear figure and show all the operations clearly.
![20250226_162056](https://github.com/user-attachments/assets/e3ec30bd-b243-49f5-813d-ba0e0df0024b)

The worst case time complexity for insertion sort is ```O(N^2)``` while the best case is ```O(N)```. In the worst case the two loops will compare N(N-1) times, which becomes ```N^2-N```. Over time, the only signifant term here is ```N^2``` which is why worst case is ```O(N^2)```. When it comes to the average case, we will assume that half of the elements are out of place and require a swap. This will take ```(N*(N-1))/2``` comparisons (half of the worst case). However, since 1/2 is a constant, this term goes away, leaving the time complexity for the average case as ```O(N^2)```.

---
#### TASK 2 - At the start of the insertion sort, the index of the inspected value is set to 1. Change the index of the inspected value and verify that the total number of operations equals 20. Consider the worst-case scenario. Use N=5, where N is the number of elements.
A worst-case scenario array with N=5 would be in decreasing order as such: ```{5, 4, 3, 2, 1}```. The insertion sort always checks the 2nd element first (index 1) since the first index has nothing to its left to compare to. If we checked index 0 first, there is nothing on the left to compare to, so the program will move on without changing the number of total operations.

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

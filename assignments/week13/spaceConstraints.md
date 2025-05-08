**Task 1 - Describe the space complexity in terms of Big O.**
``` js
function wordBuilder(array) { 
		let collection = [];
		for(let i = 0; i < array.length; i++) { 
				for(let j = 0; j < array.length; j++) {
						if (i !== j) {
								collection.push(array[i] + array[j]);
						}
				}
		}
		return collection; 
}
```
The space complexity of the `wordBuilder` function is O(n^2) because it uses a nested loop to create combinations of words from the input array. The outer loop iterates through each element in the array, and for each element, the inner loop iterates through all elements again, resulting in a quadratic growth in the number of combinations stored in the `collection` array.

**Task 2 - Describe the space complexity in terms of Big O.**
``` js
function reverse(array) { 
		let newArray = [];
		for (let i = array.length - 1; i >= 0; i--) { 
				newArray.push(array[i]);
		}
		return newArray;
}
```
The space complexity of the `reverse` function is O(n) because it creates a new array (`newArray`) that stores all the elements of the input array in reverse order. The size of `newArray` grows linearly with the size of the input array, resulting in a linear space complexity.

**Task 3 - Create a new function to reverse an array that takes up just O(1) extra space.**
``` python
# Python solution
def reverse(array): 
    left = 0
    right = len(array) - 1
    while left < right:
        temp = array[left]
        array[left] = array[right]
        array[right] = temp
        left += 1
        right -= 1
    return array
```
This function reverses the input using just O(1) extra space by swapping elements in place. It uses two pointers (`left` and `right`) to swap elements until they meet in the middle, which reverses the array without creating a new one. The space complexity is O(1) because it only uses a constant amount of extra space for the pointers and temporary variable.

**Task 4 - Fill in the table that follows to describe the efficiency of these three versions in terms of both time and space:**
``` js
// Version #1
function doubleArray1(array) { 
	let newArray = [];

	for(let i = 0; i < array.length; i++) { 
		newArray.push(array[i] * 2);
	}
	return newArray; 
}

// Version #2
function doubleArray2(array) {
	for(let i = 0; i < array.length; i++) {
  	array[i] *= 2;
  }
	return array; 
}

// Version #3
function doubleArray3(array, index=0) { 
	if (index >= array.length) { return; }
  array[index] *= 2;
  doubleArray3(array, index + 1);
	return array; 
}
```
| Version    | Time Complexity | Space Complexity |
| ---------- | --------------- | ---------------- |
| Version #1 | O(n)            | O(n)             |
| Version #2 | O(n)            | O(1)             |
| Version #3 | O(n)            | O(n)             |
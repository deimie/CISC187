**Task 1 - Identify the base case in the function:**
``` ruby
def print_every_other(low, high) 
    return if low > high
    puts low
    print_every_other(low + 2, high)
end
```
The base case in the function is `return if low > high` since it prevents the function from calling itself infinitely.

**Task 2 - Predict what will happen when we run factorial(10) using this function:**

``` ruby
def factorial(n)
    return 1 if n == 1
    return n * factorial(n - 2)
end
```
The function will enter an infinite recursion because it is decrementing `n` by 2 instead of 1. This means that when `n` is 10, it will call `factorial(8)`, then `factorial(6)`, and so on, until it reaches `factorial(0)`, which will cause an error.

**Task 3 - Fix the code by adding the correct base case:**
``` ruby
def sum(low, high)
    return high + sum(low, high - 1)
end
```
The correct base case is `return low if low == high`. This ensures that the function won't call itself infinitely when `low` equals `high`.

**Task 4 - Write a recursive function that prints all the numbers (and just numbers).**
``` python
# Python solution
def addNumbers(arr:list):
    for i in arr:
        if isinstance(i, list):
            addNumbers(i)
        else:
            print(i)

array = [ 1, 
        2, 
        3,
        [4, 5, 6],
        7,
        [8,
          [9, 10, 11,
            [12, 13, 14]
          ] 
        ],
        [15, 16, 17, 18, 19,
          [20, 21, 22,
            [23, 24, 25,
              [26, 27, 29]
            ], 30, 31 
          ], 32
        ], 33 
      ]

addnumbers(array)
```
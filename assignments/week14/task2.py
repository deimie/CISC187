def return_missing(arr):
    part_sum = 0
    full_sum = 0

    # calculate sum of arr
    for num in arr:
        part_sum += num

    # calculate sum if arr wasn't missing a number
    for num in range(len(arr) + 1):
        full_sum += num
    string = f"Missing number: {full_sum - part_sum}"
    return string


arr1 = [2, 3, 0, 6, 1, 5]
arr2 = [8, 2, 3, 9, 4, 7, 5, 0, 6]

print(return_missing(arr1))
print(return_missing(arr2))
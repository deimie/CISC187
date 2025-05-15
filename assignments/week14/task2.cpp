#include <iostream>
#include <vector>

using namespace std;

int return_missing(vector<int>& arr)
{
    int part_sum = 0;
    int full_sum = 0;

    // calculate sum of arr
    for (int& num : arr)
        part_sum += num;

    // calculate sum if arr wasn't missing a number
    for (int i = 0; i < arr.size() + 1; i++)
        full_sum += i;

    int result = full_sum - part_sum;
    return result;
}

int main()
{
    vector<int> arr1 = {2, 3, 0, 6, 1, 5};
    vector<int> arr2 = {8, 2, 3, 9, 4, 7, 5, 0, 6};

    cout << return_missing(arr1) << endl;
    cout << return_missing(arr2) << endl;
}
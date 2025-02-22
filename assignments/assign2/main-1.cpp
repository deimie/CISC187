#include <iostream>
using namespace std;

// TASK 4
void linearSearch(int arr[], int size, int target) {
    int steps = 0;
    for (int i = 0; i < size; i++) { 
        steps++;
        if (arr[i] == target)
            break;
    }
    cout << "Linear search found " << target << " in " << steps << " steps." << endl;
}

void binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int steps = 0;
    
    while (left <= right) {
        steps++;
        int mid = floor((left + right)/2);

        if (arr[mid] < target) {
            left = mid + 1;
        }  
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        else {
            cout << "Binary search found " << target << " in " << steps << " steps." << endl;
            break;
        }
    }
}

int main() {
    int arr1[] = { 41, 23, 45, 67, 98, 10, 22, 54, 67, 11, 8, 15, 72 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 2, 5, 7, 8, 11, 16, 23, 29, 35, 42, 47, 50, 52 };
    int size2 = sizeof(arr1) / sizeof(arr1[0]);

    int target = 8;

    linearSearch(arr1, size1, target);
    binarySearch(arr2, size2, target);





}

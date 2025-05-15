#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int max_product(vector<int>& arr)
{
    int max1 = 0, max2 = 0, min1 = 0, min2 = 0;
    for (int& num : arr) 
    {
        // find highest 2 values
        if (num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2)
            max2 = num;

        // find lowest 2 values
        if (num < min1)
        {
            min2 = min1;
            min1 = num;
        }
        else if (num < min2)
            min2 = num;
    }

    return max(max1*max2, min1*min2);
}

int main() 
{
    vector<int> arr = {5, -10, -6, 9, 4};
    cout << max_product(arr);
}
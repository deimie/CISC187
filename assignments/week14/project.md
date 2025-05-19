# Project Final
### Task 1
``` cpp
#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

// method takes 2D arrays and returns 1D array
vector<string> both_sports(vector<vector<string>> &bb_arr, vector<vector<string>> &fb_arr)
{
    unordered_set<string> bb_names;
    vector<string> both_sports_arr;

    // fill unordered set with bb player names
    for (auto &player : bb_arr)
    {
        string full_name = player[0] + " " + player[1];
        bb_names.insert(full_name);
    }

    // check fb players against bb set
    for (auto &player : fb_arr)
    {
        string full_name = player[0] + " " + player[1];
        if (bb_names.count(full_name)) // if fb player appears in bb set
            both_sports_arr.push_back(full_name);
    }

    return both_sports_arr;
}

int main()
{
    vector<vector<string>> basketball_players = {
        {"Jill", "Huang", "Gators"},
        {"Janko", "Barton", "Sharks"},
        {"Wanda", "Vakulskas", "Sharks"},
        {"Jill", "Moloney", "Gators"},
        {"Luuk", "Watkins", "Gators"}};

    vector<vector<string>> football_players = {
        {"Hanzla", "Radosti", "32ers"},
        {"Tina", "Watkins", "Barleycorns"},
        {"Alex", "Patel", "32ers"},
        {"Jill", "Huang", "Barleycorns"},
        {"Wanda", "Vakulskas", "Barleycorns"}};

    vector<string> result = both_sports(basketball_players, football_players);
    for (auto &name : result)
        cout << name << "\n";
}
```

### Task 2
``` cpp
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
```

### Task 3
``` cpp
#include <iostream>
#include <vector>

using namespace std;

int most_profit(vector<int>& prices)
{
    int min_price = prices[0];
    int max_profit = 0;

    for (int& price : prices)
    {
        if (price < min_price)
            min_price = price;
        else
        {
            int current_profit = price - min_price;
            if (current_profit > max_profit)
                max_profit = current_profit;
        }
    }

    return max_profit;
}

int main()
{
    vector<int> prices = {10, 7, 5, 8, 11, 2, 6};
    cout << most_profit(prices);
}
```

### Task 4
``` cpp
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
```
### Task 5
``` cpp
#include <iostream>
#include <vector>

using namespace std;

vector<float> SortTemps(vector<float> temps)
{
    // temps are multiplied by 10 for simplicity
    int min_temp = 970;
    int max_temp = 990;
    vector<int> count(21);
    vector<float> sorted_temps;
    
    // count occurences of each temp
    for (float temp : temps)
    {
        int index = (temp * 10) - min_temp;
        count[index] += 1;
    }
    
    // build sorted array
    for (int i = 0; i < count.size(); i++)
    {
        while (count[i] > 0)
        {
            sorted_temps.push_back((min_temp + i) / 10.0f);
            count[i]--;
        }
    }
    
    return sorted_temps;
}

int main()
{
    vector<float> temps = {98.6, 98.0, 97.1, 99.0, 98.9, 97.8, 98.5, 98.2, 98.0, 97.1};
    
    for (float temp : SortTemps(temps))
    {
        cout << temp << " ";
    }
}
```
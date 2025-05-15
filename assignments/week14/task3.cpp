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
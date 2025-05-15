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
    {
        cout << name << "\n";
    }
}
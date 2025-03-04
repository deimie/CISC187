#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> map =
    {
        {200,0},
        {400,1},
        {100,2},
        {50,3},
        {350,4}
    };
    
    auto val = map.find(400);
    cout << val->second;
}

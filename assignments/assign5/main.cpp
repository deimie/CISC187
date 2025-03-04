#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    // TASK 1
    // declare array
    int arr[] = {200, 400, 100, 50, 350};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // move array values into hash table
    unordered_map<int, int> map;
    for(int i = 0; i < size ; i++) {
        map[arr[i]] = i; 
    }

    // search for a key and print value
    auto val = map.find(50);
    cout << "Found " << val->first << " at index " << val->second << endl;
    
    //TASK 2
    string name = "Evan";
    hash<string> h;
    cout << "Name: " << name << "\nHash of name: " << h(name) << endl;
}

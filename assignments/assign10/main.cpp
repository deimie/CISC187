#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> graph, int startNode) {
    vector<bool> visited(graph.size(), false); // tracks visited nodes with default value "false"
    queue<int> q; // for traversing bfs
    
    q.push(startNode);
    visited[startNode] = true;
    
    while(!q.empty()) {
        // set currentNode to front of queue. pop, print, and look at all neighbors.
        int currentNode = q.front();
        q.pop();
        cout << currentNode << " ";
        
        // for each node currentNode points to
        for (int neighbor : graph[currentNode]) {
            // if connected node is unvisited, mark as visited and add to queue
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

void dfs(vector<vector<int>> graph, int currentNode) {
    // static visited array elements will persist when called multiple times
    static vector<bool> visited(graph.size(), false);
    
    visited[currentNode] = true;
    cout << currentNode << " ";
    
    for (int neighbor : graph[currentNode]) {
        if (!visited[neighbor]) {
            dfs(graph, neighbor);
        }
    }
};

int main() {
    // adjecency list
    vector<vector<int>> graph = {
        {1, 2}, // node 0 points to 1 and 2
        {2, 3}, // node 1 points to 2 and 3
        {3, 5}, // node 2 points to 3 and 5
        {4}, // node 3 points to 4
        {}, // node 4 has no pointer
        {}, // node 5 has no pointer
        {}, // node 6 has no pointer
        {6} // node 7 points to 6
    };
    
    cout << "BFS from node 0:" << "\n";
    bfs(graph, 0);
    
    cout << "\n\nBFS from node 7:" << "\n"; 
    bfs(graph, 7);
    
    cout << "\n\nDFS from node 0:" << "\n";
    dfs(graph, 0);

    cout << "\n\nDFS from node 7:" << "\n"; 
    dfs(graph, 7);
    
    cout << flush;
    
    return 0;
}

/* output of main:

BFS from node 0:
0 1 2 3 5 4 

BFS from node 7:
7 6 

DFS from node 0:
0 1 2 3 4 5 

DFS from node 7:
7 6 

*/

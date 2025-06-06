#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    // constructor
    Node(int inp) {
        data = inp;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
public:
    Node* root = nullptr;
    
    void insert(int val) {
        if(root == nullptr) {
            root = new Node(val);
        }
        
        Node* current = root;
        while(true) {
            if (val < current->data) {
                if (current->left == nullptr) {
                    current->left = new Node(val);
                    break;
                }
                current = current->left;
            } else {
                if (current->right == nullptr) {
                    current->right = new Node(val);
                    break;
                }
                current = current->right;
            }
        }
    }
    
    // TASK 3
    int greatestValue() {
        Node* current = root;
        while(true) {
            if (current->right == nullptr) {
                break;
            }
            current = current->right;
        }
        
        return node->data;
    }
    
};

int main() {
    BST tree;
    int nums[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
    
    for (int num: nums) {
        tree.insert(num);
    }
    
    cout << tree.greatestValue();
}

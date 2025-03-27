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
        Node* node = root;
        while(true) {
            if (node->right == nullptr) {
                break;
            }
            node = node->right;
        }
        
        return node->data;
    }
    
};

int main() {
    BST tree;
    int nums[] = {11, 4, 6, 8, 1, 15, 4, 0, 3, 12};
    
    for (int num: nums) {
        tree.insert(num);
    }
    
    cout << tree.greatestValue();
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    // pointer to 1st node
    Node* head;
    
public:
    LinkedList() {
        head = NULL;
    }

    void insertFront(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    
    void deleteFront() {
        if(!head) { // underflow check
            cout << "List is empty." << endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    void print() {
        if (!head) {
            cout << "list is empty." << endl;
            return;
        }
        
        Node* temp = head;
        while(temp) {
            cout << temp->data << " -> ";
            temp  = temp->next;
        }
        cout << endl;
    }
    
    
};

int main()
{
    LinkedList list1;
    
    list1.insertFront(5);
    list1.insertFront(8);
    list1.insertFront(9);
    
    list1.print();
    
    list1.deleteFront();
    
    list1.print();
}

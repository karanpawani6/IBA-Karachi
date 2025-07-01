#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* last;

public:
    CircularLinkedList() {
        last = nullptr;
    }

    // Insert at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!last) {
            last = newNode;
            last->next = last;
        }
        else {
            newNode->next = last->next;
            last->next = newNode;
        }
    }


    // Insert at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!last) {
            last = newNode;
            last->next = last;
        }
        else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    // Traverse and print the list
    void traverse() {
        int count = 0;
        if (!last) return;
        Node* temp = last->next;
        do {
            cout << temp->data << " ";
            temp = temp->next;
            count++;
        } while (temp != last->next);
        cout << endl;
        cout << "the total number of nodes are " << count << endl;
    }



};

int main() {
    CircularLinkedList cll;
    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);

    cout << "Circular Linked List: ";
    cll.traverse();

    return 0;
}
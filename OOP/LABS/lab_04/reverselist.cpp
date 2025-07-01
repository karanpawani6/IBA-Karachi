#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() { head = tail = nullptr; }

    // Insert at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {  // If the list is empty
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Insert at the end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Traverse forward
    void traverseForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Traverse backward
    void traverseBackward() {
        Node* temp = tail;
        cout << "Backward: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
    void reverse() {
        Node* first = head;
        Node* temp = nullptr;
        while (first->next) {
            temp = first->next;
            first->next = first->prev;
            first->prev = temp;
            first = temp;
        }
        first->next = first->prev;
        first->prev = nullptr;
        tail = head;
        head = first;
    }

};

int main() {
    DoublyLinkedList dll;
    dll.insert(10);
    dll.insert(20);
    dll.insert(30);
    dll.insert(40);

    // Display the original list
    dll.traverseForward();
    dll.traverseBackward();
    dll.reverse();
    dll.traverseForward();
    dll.traverseBackward();


    return 0;
}

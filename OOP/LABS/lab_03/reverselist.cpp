#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a node at the end
    void add(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to insert a node at a specific position
    void insert(int pos, int val) {
        Node* newNode = new Node(val);
        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp; ++i) {
            temp = temp->next;
        }
        if (!temp) {
            cout << "Position out of bounds" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to traverse and print the linked list
    void traverse() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Function to delete a node by value
    void remove(int val) {
        if (!head) return;
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != val) {
            temp = temp->next;
        }
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
    void reverselist() {
        Node* first = head;
        Node* second = nullptr;
        Node* reverse = nullptr;
        while (first) {
            second = first->next;
            first->next = reverse;
            reverse = first;
            first = second;
        }
        head = reverse;
    }
    void print_by_recurrsion(Node * head) {
        if (head == nullptr) return;
        print_by_recurrsion(head->next);
        cout << head->data << " -> ";
    }
    // Function to delete/destroy the entire linked list
    void destroy() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Destructor to ensure proper cleanup
    ~LinkedList() {
        destroy();
    }
};

int main() {
    LinkedList list;

    // Adding nodes to the end
    list.add(10);
    list.add(20);
    list.add(30);
    cout << list.head->data;
    // Traversing and printing the list
    cout << "Initial list: ";
    list.traverse();
    list.reverselist();
    list.traverse();
    list.print_by_recurrsion(list.head);

    // Inserting a node within the list
    list.insert(1, 15);
    cout << "After insertion at position 1: ";
    list.traverse();

    // Deleting a node
    list.remove(20);
    cout << "After deleting 20: ";
    list.traverse();

    // Destroying the list
    list.destroy();
    cout << "After destroying the list: ";
    list.traverse();

    return 0;
}

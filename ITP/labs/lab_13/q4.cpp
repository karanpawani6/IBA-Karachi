#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

};
Node* reverseLinkedList(Node* head) {
    Node* reverse = nullptr; 
    Node* first = head;      

    while (first != nullptr) {
        Node* second = first->next; 
        first->next = reverse;    
        reverse = first;           
        first = second;             
    }

    return reverse; 
}
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node();
    head->data=10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next = new Node();
    head->next->next->data = 30;

    cout << "Original List: ";
    displayList(head);
    head = reverseLinkedList(head);

    cout << "Reversed List: ";
    displayList(head);

    return 0;
}

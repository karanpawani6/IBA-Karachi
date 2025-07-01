#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
    
};
void display(node* head){
    node* current = head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
}
int main(){
    node* head = new node{10,nullptr};
    node* second = new node{20,nullptr};
    node* third = new node{30,nullptr};
    head->next= second;
    second->next = third;
    third-> next = nullptr;
    display(head);

}
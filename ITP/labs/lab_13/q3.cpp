#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
 void addnode(node* &head, int value){
    node* newnode = new node();
        newnode->data = value;
        newnode->next = nullptr;
        if(head==nullptr){
            head = newnode;
        }else{
            node* temp =head;
            while(temp->next!=nullptr){
                temp= temp->next;
            }
            temp->next= newnode;
        }

         }
         void display(node* head){
            node* current = head;
            while(current!=nullptr){
                cout<<current->data<<" ";
                
                current = current->next;
            }
         }
         void freespace(node* &head){
          while(head!=nullptr){
             node*temp = head;
             head=temp->next;
             delete temp;
         }
         }
         int main(){
            node* head = nullptr;
            addnode(head,5);
            addnode(head,10);
            addnode(head,15);
            display(head);
            freespace(head);
            return 0;
         }
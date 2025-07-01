#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
 void print(node* head){
       node* temp =head;
       if(temp==nullptr){
        return;
       }else{
        cout<<temp->data<<" ";
        print(head->next);
       }
 }
 void rprint(node* head){
     node* temp = head;
       if(temp==nullptr){
        return;
       }else{
        rprint(head->next);
        cout<<temp->data<<" ";
       }
 }
int main(){
    node* head = new node() ;
    node* second = new node(); 
    node* third =  new node();
    head->data=10;
    head->next=second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = nullptr;
    print(head);
    cout<<endl;
    rprint(head);
    return 0;
     
}
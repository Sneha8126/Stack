#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class Stack{
    public:
    Node* head;
    Stack(){
        head=NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void pop(){
        if(head == NULL){
            cout<<"Stack is empty!";
            return;
        }
        Node* ptr = head;
        head = head->next;
        delete ptr;
    }
    void top(){
        if(head == NULL){
            cout<<"Stack is empty!";
            return;
        }
        cout<<head->data;
    }
    void display(){
        Node* ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(4);
      s.push(7);
        s.push(9);
          s.push(5);
            s.push(3);
            s.display();
            s.pop();
            s.display();
            s.top();
    return 0;
}
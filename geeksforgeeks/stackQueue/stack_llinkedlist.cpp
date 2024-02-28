#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        next = NULL;
    }
};

class Stack{
private:
    Node* top;

public:
    Stack(){
        top =NULL;
    }
    
    void push(int value){
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    bool empty(){
        return top == NULL;
    }

};
int main(){
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout<<"Top element: "<<myStack.peek()<<endl;

    myStack.pop();
    myStack.pop();
    myStack.pop();

    cout<<"Is the stack empty? "<<(myStack.empty() ? "Yes" : "No")<<endl;

    return 0;
}
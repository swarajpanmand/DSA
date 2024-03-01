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

class Queue{
private:
    Node* front;
    Node* rear;

public:
   Queue(){
    front = rear = NULL;
   }

   void enqueue(int value){
        Node* newNode = new Node(value);
        if(isEmpty()){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;       //head hamesha first element ko point karta hai
        rear = newNode;
   }

   void dequeue(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    Node* temp = front;
    front = front->next;
    if(front == NULL){
        rear = NULL;
    }
    delete temp;
   }

   int peek(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return front->data;
   }

   bool isEmpty(){
        return front == NULL;

   }
};

int main(){
    Queue myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    cout<<"Front element: "<<myQueue.peek()<<endl;

    myQueue.dequeue();
    myQueue.dequeue();

    cout<<"Is the Queue empty? "<<(myQueue.isEmpty() ? "Yes" : "No")<<endl;

    return 0;
}
#include<iostream>
using namespace std;

const int MAX_SIZE =100;

class Queue{
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue(){
        front = rear = -1;
    }

    void enqueue(int value){
        if(rear == MAX_SIZE -1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[++rear] =value;
        if(front = -1){
            front = 0;
        }
    }
        void dequeue(){
            if(front == -1){
                cout<<"Queue Underflow"<<endl;
                return;
            }
            if (front == rear){
                front = rear = -1;
            }
            else{
                front++;
            }
            
        }

        int peek(){
            if(front == -1){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            return arr[front];
        }

        bool isEmpty(){
            return front == -1;
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
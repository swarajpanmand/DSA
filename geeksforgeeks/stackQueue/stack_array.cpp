#include<iostream>
using namespace std;

const int MAX_SIZE =100;

class Stack{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(int value){
        if(top ==MAX_SIZE - 1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top]= value;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }

};

int main(){
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout<<"Top element: "<<myStack.peek()<<endl;

    myStack.pop();
    myStack.pop();

    cout<<"Is the Stack empty? "<< (myStack.empty() ? "Yes" : "No")<<endl;

    return 0;
}
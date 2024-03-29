#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head =NULL;
    }

    void reverse() {
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}


    void display() {
    Node* temp = head;
    while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }




    void push(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
};

int main(){
    LinkedList myList;
    myList.push(5);
    myList.push(3);
    myList.push(2);
    myList.push(1);

    cout<<"Original linked list"<<endl;
    myList.display();
    cout<<endl;

    myList.reverse();
    cout<<"Reversed linked list"<<endl;    
    myList.display();
}
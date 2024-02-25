#include<iostream>
using namespace std;

class Node{
public:
    int data; //Data of th node
    Node* next; //Pointer to the next node

    //Constructor to initialize the node with given data and a null next pointer
    Node(int data){
        this->data = data;
        next=NULL;
    }
};

class LinkedList{
public:
    Node* head;  //Pointer to the head of the linked list

    //Constructor to initialize the head with null
    LinkedList(){
        head = NULL;
    }

    void insertAtBeginning(int val){
        Node* newNode = new Node(val);  //Create a new node with the given value
        newNode->next = head;           //Set the next pointer of the new node to the current head
        head = newNode;                 //Update the head to the new node
    }

    //Function to display the linked list
    void display(){
        Node* current = head;  //Start from the head of the list
        while(current!=NULL){
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<< endl;
    }
};

int main(){
    LinkedList myList;
    myList.insertAtBeginning(3);
    myList.insertAtBeginning(2);
    myList.insertAtBeginning(1);

    //Display the linked list
    cout<<"Linked List: ";
    myList.display();
}
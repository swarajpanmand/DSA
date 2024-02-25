#include<iostream>
using namespace std;

class Node{
public:
    int data;       //Data of the node
    Node* next;     //Pointer to the next node
    Node* prev;     //Pointer to the previous node

    //Constructor to initialize a node with given data and null next and previous pointers
    Node(int data){
        this->data = data;
        next= NULL;
        prev= NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;   //Pointer to the head of the linked list

    //Constructor to instialize an empty doubly linked list
    DoublyLinkedList(){
        head = NULL;
    }

    //Function to insert a new node at the beginning of hte list
    void insertAtBeginning(int val){
        Node* newNode= new Node(val);  //Create a new node with the given value
        newNode->next = head;          //Set the next pointer of the new node to the current head

        if(head != NULL){
            head->prev = newNode;      //If the list is not empty, update the prev pointer of the current head 
        }

        head = newNode;                //Update the head to the new node

    }

    //Function to display the linked list
    void display(){
        Node* current = head;   //Start from the head of the list

        while(current!=NULL){
            cout<<current->data<<" ";   //Print the data of the current node
            current = current->next;    //Move to the next node
        }

        cout<<endl;

    }
};

int main(){
    DoublyLinkedList myList;

    //Insert elements at the beginning
    myList.insertAtBeginning(3);
    myList.insertAtBeginning(2);
    myList.insertAtBeginning(1);

    //Display the linked list
    cout<<"Doubly Linked List: ";
    myList.display();

    return 0;

}
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data = value;
        left= NULL;
        right= NULL;
    }
};

class BinaryTree{
public:
    int findMax(Node* root){
        while(root->right != NULL){
            root = root->right;
        }
        return root->data;
    }
};

int main(){
    BinaryTree tree;

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(4);
    root->right->left = new Node(3);
    root->right->right = new Node(5);

    cout<<tree.findMax(root);
    return 0;
}
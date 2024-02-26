#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree{
public: 
    void deleteTree(Node* root){
        if(root != NULL){
            deleteTree(root->left);
            deleteTree(root->right);
            delete root;
        }
    }

};

int main(){
    BinaryTree tree;

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(4);
    root->right->left = new Node(3);
    root->right->right = new Node(5);

    tree.deleteTree(root);

    return 0;
}
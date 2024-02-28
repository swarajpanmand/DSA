#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data= value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree{
public:
    void inorderTraversal(Node* root){
        if(root== NULL){
            return;
        }
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }

};

int main(){
    BinaryTree tree;
    
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(5);

    tree.inorderTraversal(root);
    return 0;
}
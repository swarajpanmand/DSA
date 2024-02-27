#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree{
public:
    bool sameStructure(Node* root1, Node* root2){
        if(root1 ==NULL && root2 == NULL){
            return true;
        }
        if(root1!=NULL && root2!=NULL){
            return (sameStructure(root1->left, root2->left) && sameStructure(root1->right, root2->right));
        }
        return false;
    }
};

int main(){
    BinaryTree tree;

    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);
    root1->left->left = new Node(3);
    root1->left->right = new Node(5);

    Node* root2 = new Node(7);
    root2->left = new Node(6);
    root2->right = new Node(9);
    root2->left->left = new Node(8);
    root2->left->right = new Node(10);
    root2->right->left = new Node(11);

    cout<<tree.sameStructure(root1, root2)<<endl;
}
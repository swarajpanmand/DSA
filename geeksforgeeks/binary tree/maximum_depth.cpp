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
    int maxDepth(Node* root){
        if(root == NULL){
            return 0;
        }
        else{
            int lDepth = maxDepth(root->left);
            int rDepth = maxDepth(root->right);

            if(lDepth > rDepth){
                return lDepth+1;
            }
            else{
                return rDepth+1;
            }

        }
    }
};

int main(){
    BinaryTree tree;

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    cout<<tree.maxDepth(root);
    return 0;
}
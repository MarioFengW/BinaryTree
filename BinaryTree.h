#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>

struct Node {
    int data;

    Node* left;
    Node* right;

    Node(int value);
};

class BinaryTree { 
    public:
        Node* root;

        BinaryTree();

        Node* insert(Node* node, int value);

        Node* search(Node* node, int value);
        
        // void preOrder(Node* node);
};


#endif
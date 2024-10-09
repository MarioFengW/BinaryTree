#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main() {

    BinaryTree tree;
    
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);
    
    int valueToSearh = 30;
    Node* result = tree.search(tree.root, valueToSearh);
    
    cout <<  result -> data;

    return 0;
}
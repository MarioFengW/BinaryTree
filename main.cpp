#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main() {
    BinaryTree tree;
    
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 40);
    tree.root = tree.insert(tree.root, 60);
    tree.root = tree.insert(tree.root, 80);

    cout << "In-order traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    cout << "Pre-order traversal: ";
    tree.preOrderTraversal(tree.root);
    cout << endl;

    cout << "Post-order traversal: ";
    tree.postOrderTraversal(tree.root);
    cout << endl;

    int valueToSearch = 30;
    Node* result = tree.search(tree.root, valueToSearch);
    if (result != nullptr) {
        cout << "Value " << valueToSearch << " found in the tree." << endl;
    } else {
        cout << "Value " << valueToSearch << " not found in the tree." << endl;
    }

    int valueToRemove = 30;
    tree.root = tree.remove(tree.root, valueToRemove);
    cout << "After removing " << valueToRemove << ", in-order traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    return 0;
}
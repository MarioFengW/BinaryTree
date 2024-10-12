# Binary Search Tree (BST) Implementation in C++

This project provides an implementation of a Binary Search Tree (BST) data structure in C++. A BST is a tree data structure in which each node has at most two children, and for any given node, the left child's value is less than the parent's value, and the right child's value is greater than the parent's value.

## Table of Contents
- [Understanding the BST](#understanding-the-bst)
- [BST Class](#bst-class)
- [Operations](#operations)
- [Complexity Analysis](#complexity-analysis)


## Understanding the BST

A Binary Search Tree (BST) maintains the following properties:
- **Left Subtree**: Contains nodes with values less than the node’s value.
- **Right Subtree**: Contains nodes with values greater than the node’s value.
- **No Duplicate Nodes**: Each value in the BST must be unique.

## Traversal Methods
- **In-order Traversal**: Visits nodes in the order Left → Root → Right. This produces a sorted sequence of values.
- **Pre-order Traversal**: Visits nodes in the order Root → Left → Right. This is useful for creating a copy of the tree.
- **Post-order Traversal**: Visits nodes in the order Left → Right → Root. This is useful for deleting the tree or evaluating expressions.

## Operations
**insert**: Inserts a new node with a given value in the appropriate position while maintaining BST properties.
**search**: Checks whether a specified value exists in the tree.
**remove**: Deletes a node from the tree, ensuring that the properties of the BST are maintained after removal.
**inOrderTraversal**: Prints the elements of the tree in sorted order.
**preOrderTraversal**: Prints the elements of the tree in pre-order.
**postOrderTraversal**: Prints the elements of the tree in post-order.

## Complexity Analysis
Insertion: O(log(n)), O(h). When inserting a new node, you traverse the tree from the root to find the correct location for the new node, which takes time proportional to the height of the tree.
Search: O(log(n)), O(h). Similarly, searching for a value involves traversing the tree, which also depends on the height.
Removal: O(log(n)), O(h). Removing a node requires finding it first and then restructuring the tree, which can also take time proportional to the height.



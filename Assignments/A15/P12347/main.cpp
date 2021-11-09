/*****************************************************************************
*
*    Author:           Loic Konan
*    Email:            loickonan.lk@gmail.com
*    Label:            Presentation
*    Title:            
*    Course:           
*    Semester:         Fall 2021
*    Description:
*
*       This program .
*
*    Files:
*         main.cpp
*         Timer.hpp
*         mygetch.hpp
*         termcolor.hpp
*         infile 
*         infile1
*         infile 2
*         infile3
*
*    Usage:
*           main.cpp          : driver program
*           animals.txt       : Input file
*
*           The Time will be display on the console in color.
*
******************************************************************************/
#include <iostream>
#include <vector>
#include "termcolor.hpp"
#include <time.h>
#include <chrono>
#include "Timer.hpp"

using namespace std;

// Data structure to store a BST node
struct Node
{
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node() {}
    Node(int data) : data(data) {}
};

// Function to perform postorder traversal on the tree
void postorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    postorder(root->left);
    cout << root->data << "\n";
    postorder(root->right);
}

// Recursive function to insert a key into a BST
Node *insert(Node *root, int key)
{
    // if the root is null, create a new node and return it
    if (root == nullptr)
    {
        return new Node(key);
    }

    // if the given key is less than the root node, recur for the left subtree
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    // if the given key is more than the root node, recur for the right subtree
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}

// // Iterative function to insert a key into a BST.
// // Root is passed by reference to the function
// void insert(Node *&root, int key)
// {
//     // start with the root node
//     Node *curr = root;

//     // pointer to store the parent of the current node
//     Node *parent = nullptr;

//     // if the tree is empty, create a new node and set it as root
//     if (root == nullptr)
//     {
//         root = new Node(key);
//         return;
//     }

//     // traverse the tree and find the parent node of the given key
//     while (curr != nullptr)
//     {
//         // update the parent to the current node
//         parent = curr;

//         // if the given key is less than the current node, go to the
//         // left subtree; otherwise, go to the right subtree.
//         if (key < curr->data)
//         {
//             curr = curr->left;
//         }
//         else
//         {
//             curr = curr->right;
//         }
//     }

//     // construct a node and assign it to the appropriate parent pointer
//     if (key < parent->data)
//     {
//         parent->left = new Node(key);
//     }
//     else
//     {
//         parent->right = new Node(key);
//     }
// }

// Function to construct a BST from my vector of keys(Numbers)
Node *constructBST(vector<int> const &keys)
{
    Node *root = nullptr;
    for (int key : keys)
    {
        root = insert(root, key);                  // Use this for the recursive version
        // insert(root, key);                      // Use this for the iterative version
    }
    return root;
}

int main()
{
    Timer clock;                  // Timer 
    clock.Start();

    vector<int> keys;
    int node;

    while (cin >> node)
    {
        keys.push_back(node);
    }

    Node *root = constructBST(keys);

    postorder(root);

    clock.End();
    cout << termcolor::green << clock.MilliSeconds() << termcolor::reset << " MilliSeconds\n";

    return 0;
}

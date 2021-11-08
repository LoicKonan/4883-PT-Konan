#include <iostream>
using namespace std;

struct node
{
    int value;
    node *left;
    node *right;
}

class Binary_Search_Tree
{
public:
    Binary_Search_Tree(); // Default constructor.
    void insert(int key); // To insert a node.
    void print();         // Print.
    node *root;           // Pointer to root element.
}

Binary_Search_Tree::Binary_Search_Tree()
{
    root = NULL
}

void Binary_Search_Tree::insert(int key, node *left)
{
    if(key < leaf->value)
    {
        if(leaf->left != NULL)
        {
            insert(key, leaf->left)
        }
    }
    else
    {
        root = new node;
        root->value = key;
        root->left = NULL;
        root->right = NULL;
    }
}
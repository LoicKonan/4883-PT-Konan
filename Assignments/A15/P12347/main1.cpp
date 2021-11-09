#include <bits/stdc++.h>
using namespace std;

class Binary_Tree
{
    int data;
    Binary_Tree *left;
    Binary_Tree *right;

public:
    // Default Constructor definition.
    Binary_Tree() : data(0), left(NULL), right(NULL) {}
    Binary_Tree(int);
    Binary_Tree *Insert(Binary_Tree *, int);
    Binary_Tree *BuildTree(Binary_Tree *root);
    void Postorder(Binary_Tree *);
};

// Parameterized Constructor definition.
Binary_Tree::Binary_Tree(int value)
{
    data = value;
    left = right = NULL;
}
// Insert function definition.
Binary_Tree *Binary_Tree::Insert(Binary_Tree *root, int value)
{
    if (root == NULL)
        return new Binary_Tree(value);
    if (value > root->data)
        root->right = Insert(root->right, value);
    else
        root->left = Insert(root->left, value);
    return root;
}
//Postorder traversal function
void Binary_Tree::Postorder(Binary_Tree *root)
{
    if (root)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << '\n';
    }
    return;
}

//Function that reads value from file and build tree.
Binary_Tree *Binary_Tree::BuildTree(Binary_Tree *root)
{
    int x;
    cin >> x;
    root = Insert(root, x);
    while (cin >> x)
        Insert(root, x);
    return root;
}

int main()
{
       
    Binary_Tree obj;
    Binary_Tree *root = NULL;
    root = obj.BuildTree(root);

    obj.Postorder(root);
}
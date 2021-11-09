#include <iostream>
#include <vector>
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
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << '\n';
    }
    return;
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

// Function to construct a BST from given keys
Node *constructBST(vector<int> const &keys)
{
    Node *root = nullptr;
    for (int key : keys)
    {
        root = insert(root, key);
    }
    return root;
}

int main()
{
    vector<int> keys;
    int node;

    while (cin >> node)
    {
        keys.push_back(node);
    }

    Node *root = constructBST(keys);

    postorder(root);

    return 0;
}

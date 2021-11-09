// Tree traversal in C++

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Postorder traversal
void postorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "\n";
}

int main()
{
    int Number;
    struct Node *node = new Node(Number);

    while (cin >> Number)
    {
        
    }

    cout << "\nPostorder traversal ";
    postorderTraversal(node);
    return 0;
}
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
        left       = NULL;
        right      = NULL;
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
    struct Node *root = new Node(Number);
    

    // TreeNode *root = NULL;
    // while (cin >> val)
    // {
    //     root = TreeNode::insert(val, root);
    // }
    // root->postorder(root, val);

    cout << "\nPostorder traversal ";
    postorderTraversal(root);
    return 0;
}
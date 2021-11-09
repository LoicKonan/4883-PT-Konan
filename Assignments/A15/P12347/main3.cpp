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

// insert element in the tree
static insert(struct Node *node, int val)
{
    if (node == NULL)
    {
        return;
    }
    if (val < node->data)
    {
        node->left = insert(val, node->left);
    }
    else
    {
        node->right = insert(val, node->right);
    }
    return node;
}
int main()
{
    int Number;
    struct Node *node = new Node(Number);

    // TreeNode *node = NULL;
    // while (cin >> val)
    // {
    //     node = TreeNode::insert(val, node);
    // }
    // node->postorder(node, val);

    cout << "\nPostorder traversal ";
    postorderTraversal(node);
    return 0;
}
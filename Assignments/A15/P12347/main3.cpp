//Binary Search Tree Program

#include <iostream>
#include <cstdlib>
using namespace std;

class BinarySearchTree
{
private:
    struct tree_node
    {
        tree_node *left;
        tree_node *right;
        int data;
    };
    tree_node *root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    bool isEmpty() const 
    { 
        return root == NULL; 
    }
    
    void print_postorder();
    void postorder(tree_node *);
    void insert(int);
    
};

// Smaller elements go left
// larger elements go right
void BinarySearchTree::insert(int d)
{
    tree_node *t = new tree_node;
    tree_node *parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;

    // is this a new tree?
    if (isEmpty())
        root = t;
    else
    {
        //Note: ALL insertions are as leaf nodes
        tree_node *curr;
        curr = root;
        // Find the Node's parent
        while (curr)
        {
            parent = curr;
            if (t->data > curr->data)
                curr = curr->right;
            else
                curr = curr->left;
        }

        if (t->data < parent->data)
            parent->left = t;
        else
            parent->right = t;
    }
}



void BinarySearchTree::print_postorder()
{
    postorder(root);
}

void BinarySearchTree::postorder(tree_node *p)
{
    if (p != NULL)
    {
        if (p->left)
            postorder(p->left);
        if (p->right)
            postorder(p->right);
        cout << " " << p->data << " ";
    }
    else
        return;
}


int main()
{
    BinarySearchTree b;

    int x;
    cin >> x;
    while (cin >> x)
        b.insert(x);

    b.print_postorder();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class orderedBT
{
    int data;
    orderedBT *left, *right;

    public:
        orderedBT();
        orderedBT(int);
        orderedBT *Insert(orderedBT *, int);
        orderedBT *BuildTree(orderedBT *root);
        void Postorder(orderedBT *);
};

// Default Constructor definition.
orderedBT::orderedBT() : data(0), left(NULL), right(NULL) {}
// Parameterized Constructor definition.
orderedBT::orderedBT(int value)
{
    data = value;
    left = right = NULL;
}
// Insert function definition.
orderedBT *orderedBT::Insert(orderedBT *root, int value)
{
    if (root == NULL)
        return new orderedBT(value);
    if (value > root->data)
        root->right = Insert(root->right, value);
    else
        root->left = Insert(root->left, value);
    return root;
}
//Postorder traversal function
void orderedBT::Postorder(orderedBT *root)
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
orderedBT *orderedBT::BuildTree(orderedBT *root)
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
    orderedBT obj;
    orderedBT *root = NULL;
    root = obj.BuildTree(root);

    obj.Postorder(root);
}
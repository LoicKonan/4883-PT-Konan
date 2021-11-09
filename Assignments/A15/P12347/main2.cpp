#include <bits/stdc++.h>
using namespace std;

//treenode class with all the methods
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    //constructor
    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    //postorder traversal helper method to print first maxNodes number of elements
    void postorderTraversal(TreeNode *root, const int maxNodes, int &numNodes)
    {
        if (numNodes >= maxNodes)
            return;
        if (root == NULL)
            return;

        postorderTraversal(root->left, maxNodes, numNodes);
        postorderTraversal(root->right, maxNodes, numNodes);
        
        if (numNodes < maxNodes)
        {
            cout << root->data << " ";
            numNodes++;
        }
    }
    // insert element in the tree
    static TreeNode *insert(int val, TreeNode *root = NULL)
    {
        if (root == NULL)
        {
            return new TreeNode(val);
        }
        if (val < root->data)
        {
            root->left = insert(val, root->left);
        }
        else
        {
            root->right = insert(val, root->right);
        }
        return root;
    }

    // prints the first maxNodes number of postorder traversal of the tree
    void postorder(TreeNode *root, int maxNodes)
    {
        if (root == NULL)
        {
            return;
        }
        int numNodes = 0;
        postorderTraversal(root, maxNodes, numNodes);
        cout << endl;
    }
};

int main()
{
    int val;
    TreeNode *root = NULL;
    while (cin >> val)
    {
        root = TreeNode::insert(val, root);
    }
    root->postorder(root, val);
}
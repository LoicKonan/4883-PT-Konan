// C++ program to print Postorder traversal from
// given Inorder and Preorder traversals.
#include <bits/stdc++.h>
using namespace std;

int preIndex = 0;

void printPost(vector<int> pre, int inStrt,
               int inEnd)
{
    if (inStrt > inEnd)
        return;

    // Find index of next item in preorder traversal in inorder.
    int inIndex = pre[preIndex++];

    // traverse left tree
    printPost( pre, inStrt, inIndex);

    // traverse right tree
    printPost( pre, inIndex, inEnd);
}

void printPostMain( vector<int> pre, int n)
{
    for (int i = 0; i < n; i++)
        pre[i] = i;

    printPost(pre, 0, n - 1);
}

// Driver code
int main()
{
     int node;

    vector<int> pre;
    // vector<int> InOrder;

    while (cin >> node)
    {
        pre.push_back(node);                          // Added it to the vector PreOrder.
    }
    // int pre[] = {1, 2, 4, 5, 3, 6};
    // int n = sizeof(pre) / sizeof(pre[0]);

    printPostMain(pre, node-1);
    return 0;
}

// This code is contributed by Arnab Kundu

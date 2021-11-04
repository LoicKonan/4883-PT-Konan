#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

#define FileIn(file) freopen(file ".inp", "r", stdin)
#define FileOut(file) freopen(file ".out", "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define bit(n) (1 << (n))
#define Last(i) (i & -i)
#define INF 500000000
#define EPS 1e-7
#define maxN 10000
using namespace std;
#define endl "\n"


void PreToPost(vector<int> PreOrder, int min, int max)
{
    static int i = 0;                              //  we don't need this to be modified again.

    // cout << "min is: " << min << " max is: " << max << endl;

    if (PreOrder[i] < min || PreOrder[i] > max)    // breaks if not part of current subtree.                                       
    {
        return;
    }

    if (i == PreOrder.size())                      // breaks if the whole vector has been searched through
    {
        return;
    }

    int NodeHead = PreOrder[i++];                  // used for recursion as the value at the head

    PreToPost(PreOrder, min, NodeHead);            // all values in the left subtree

    PreToPost(PreOrder, NodeHead, max);            // all values in the right subtree
                                                        
    cout << NodeHead << '\n';
}

int main()
{
    int node;

    vector<int> PreOrder;
    vector<int> InOrder;

    while (cin >> node)
    {
        PreOrder.push_back(node);
        InOrder.push_back(node);
    }

    sort(InOrder.begin(), InOrder.end());          // sorts the inorder vector to put into inorder
                                                   
                                                   
                                                   // get the first element using front()
                                                   // get the Last element using back()
    PreToPost(PreOrder, InOrder.front(), InOrder.back());

    return 0;
}
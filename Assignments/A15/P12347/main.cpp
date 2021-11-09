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

int index = 0;                                                  // Initializing  our index variable to zero

void Postorder(vector<int> PreOrder, int min, int max)
{
    // cout << "min is: " << min << " max is: " << max << endl;

    if (PreOrder[index] < min || PreOrder[index] > max)         // breaks if not part of current subtree.                                       
    {
        return;
    }

    if (index == PreOrder.size())                               // breaks if the whole vector has been searched through
    {
        return;
    }

    int NodeHead = PreOrder[index++];          
                                                                // used for recursion as the value at the head

    Postorder(PreOrder, min, NodeHead);                         // all values in the left subtree

    Postorder(PreOrder, NodeHead, max);                         // all values in the right subtree
                                                        
    cout << NodeHead << '\n';
}

int main()
{
    vector<int> PreOrder;
    vector<int> PreOrder;

    int node;

    while (cin >> node)
    {
        PreOrder.pb(node);                                      // Added it to the vector PreOrder.
        PreOrder.pb(node);                                      // Added it to the vector PreOrder.
    }

    sort(PreOrder.begin(), PreOrder.end());                     // sorts the PreOrder vector to put into PreOrder
                                                   
                                                   
                                                                // get the first element using front()
                                                                // get the Last element using back()
    Postorder(PreOrder, PreOrder.front(), PreOrder.back());

    return 0;
}
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

typedef vector<int> vi;    // vector if ints
typedef pair<int, int> ii; // pair of ints
typedef vector<ii> vii;    // vector of pairs
typedef vector<vi> vvi;    // vector of vector of ints


void PreToPost(vector<int> PreOrder, int min, int max)
{
    static int i = 0;                              // index marker.

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
    int x;

    vector<int> PreOrder;
    vector<int> InOrder;

    while (cin >> x)
    {
        PreOrder.emplace_back(x);
        InOrder.emplace_back(x);
    }

    sort(InOrder.begin(), InOrder.end());          // sorts the inorder vector to put into inorder
                                                        
    PreToPost(PreOrder, InOrder.front(), InOrder.back());

    return 0;
}
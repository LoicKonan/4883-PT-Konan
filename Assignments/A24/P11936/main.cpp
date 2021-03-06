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
#include <iomanip>

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

typedef vector<int> vi;             // vector if ints
typedef pair<int, int> ii;          // pair of ints
typedef vector<ii> vii;             // vector of pairs
typedef vector<vi> vvi;             // vector of vector of ints

int main()
{
    int a;                          // First input number.
    int b;                          // Second input number.
    int c;                          // Third input number.

    int n;                          // Number of of inputs.

    while (cin >> n)                // Read in the number of input.
    {
        while (cin >> a >> b >> c)  // Read in the 3 triangle sides.
        {
            /**
             * 
             * If the addition of two side of the triangle
             * is less than one side then display Wrong.
             * 
             */
            if ((a + b <= c) || (c + b <= a) || (a + b <= c))
            {
                    cout << "Wrong!!\n";
            }

            /** Display OK**/
            else
                    cout << "OK\n";
        }
    }
    return 0;
}



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


int main()
{
    int t;                          // number of test cases.

    cin >> t;                       // Read in the Test Case.

    REP(i,t)                        
    {
        long long n;                // number of of integers.
        cin >> n;                   // read in the numbers.                  

        /**
         * 
         * Multiply n by 567
         * then divide the result by 9, 
         * then add 7492, 
         * then multiply by 235, 
         * then divide by 47, 
         * then subtract 498
         * 
         */

        long long answer = abs((((((n * 567) / 9) + 7492) * 235) / 47) - 498);

        int result = answer / 10;   // Divide result by 10.

        int tens = result % 10;     // Extrapolate the digit in the tens column.

        cout << tens << endl;       // Display the result.
    }

    return 0; 
}



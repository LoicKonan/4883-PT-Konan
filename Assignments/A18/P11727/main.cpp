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
    int inputs;             // The number of test cases.
    int a;                  // First input number.
    int b;                  // Second input number.
    int c;                  // Third input number.
    int counter = 1;        // The while loop variable to 1.
    vector<int> numbers;    // The vector of numbers will use this just to facilitate the sortings.

    while (cin >> inputs)   // Read input.
    {
        int i  = 1;         // The second while loop variable to zero.
        while (cin >> a >> b >> c)  // Read in the 3 values on each line.
        {
            numbers.push_back(a);   // add the first number to the vector.
            numbers.push_back(b);   // add the second number to the vector.
            numbers.push_back(c);   // add the third number to the vector.
           
            sort(numbers.begin(), numbers.end());   // Sort the numbers in 3 number that were read in.

            cout << "Case " << i << ": " << numbers[1];   // Display each case.

            cout << '\n';
            numbers.clear();        // Clear the vector.
            i++;                    // Increment the second while loop variable counter.
        }

        counter++;                  // Increment the counter of the first while loop variable.
    }
    return 0;
}
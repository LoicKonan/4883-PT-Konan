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

typedef vector<int> vi;     // vector if ints
typedef pair<int, int> ii;  // pair of ints
typedef vector<ii> vii;     // vector of pairs
typedef vector<vi> vvi;     // vector of vector of ints

int main()
{
    int inputs;             // The number of test cases.
    int a;                  // First input number.
    int b;                  // Second input number.
    int c;                  // Third input number.
    int counter = 1;        // The while loop variable to 1.

    vector<int> numbers;
    while (cin >> inputs)
    {

        for(int i = 0; i < inputs; i++)
        {
            numbers.push_back(inputs);

            sort(numbers.begin(), numbers.end());

            cout << numbers[i] << endl;

        }


        // cout << "Case " << counter << ": UNKNOWN";

        // // If number a is greater than the other 2 numbers.
        // if((a > b) && (a > c)) 
        // {

        // }
        
        // // If number b is greater than the other 2 numbers.
        // else if ((b > a) && (b > c)) 
        // {

        // }
        
        // // If number c is greater than the other 2 numbers.
        // else if ((c > a) && (c > b)) 
        // {
        // }
        
    }
    return 0;
}
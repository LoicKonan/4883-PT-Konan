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
   int a;                   // First input number.
   int b;                   // Second input number.
   int c;                   // Third input number.          
    
    /**
     * 
     * Read in each line as long as long
     * number a, b, and c are not equal to zero.(0,0,0).
     * 
     */
    while ((cin >> a >> b >> c) && (a != 0) && (b != 0) && (c != 0))
    {
        // If number a is greater than the other 2 numbers.
        if((a > b) && (a > c)) 
        {
            if (sqrt(a * a) == sqrt((b * b) + c * c)) cout << "right\n";
            else cout << "wrong\n";
        }
        
        // If number b is greater than the other 2 numbers.
        else if ((b > a) && (b > c)) 
        {
            if (sqrt(b * b) == sqrt((a * a) + c * c)) cout << "right\n";
            else cout << "wrong\n";
        }
        
        // If number c is greater than the other 2 numbers.
        else if ((c > a) && (c > b)) 
        {
            if (sqrt(c * c) == sqrt((b * b) + a * a)) cout << "right\n";
            else cout << "wrong\n";
        }
        
        // If all 3 numbers are equal then print "wrong".
        else  cout << "wrong\n";
    }

    return 0;
}